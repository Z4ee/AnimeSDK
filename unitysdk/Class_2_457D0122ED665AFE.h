#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Class_1_194AF035DF2F7DB0.h"
#include "unitysdk/MoleMole/CustomCollisionConfigData_CustomCollisionAlgorithm.h"

class Class_2_3D16FBC32AAD2673;
class Class_2_45534E9ACEDAE009;
class Class_2_457D0122ED665AFE_Class_1_A55A17DBD171A840;
class Class_2_DA22CBE4C7989D9F;
namespace MoleMole { class CameraModuleAvatarDataConfigExt; }
namespace MoleMole::Cameras { class CameraDataAccessor; }

#define CLASS_2_457D0122ED665AFE_METHOD_2_04DC58A6E3312864_OFFSET UNITYSDK_OFFSET(0x1348BEF0)
#define CLASS_2_457D0122ED665AFE_METHOD_2_57119881929565D0_OFFSET UNITYSDK_OFFSET(0x1348BF80)
#define CLASS_2_457D0122ED665AFE_METHOD_2_5FF3D794AAC76116_OFFSET UNITYSDK_OFFSET(0x1348B7D0)
#define CLASS_2_457D0122ED665AFE_METHOD_2_94F261199A6AC853_OFFSET UNITYSDK_OFFSET(0x1348B980)
#define CLASS_2_457D0122ED665AFE_METHOD_2_9ED7637DBE55A9AE_OFFSET UNITYSDK_OFFSET(0x1348BA30)
#define CLASS_2_457D0122ED665AFE__CTOR_OFFSET UNITYSDK_OFFSET(0x1348B670)

inline static constexpr unsigned int Class_2_457D0122ED665AFE_TypeDefinitionIndex = 40129;

class Class_2_457D0122ED665AFE : public ::Class_1_194AF035DF2F7DB0
{
public:
	::Class_2_DA22CBE4C7989D9F* Field_2_0; // 0x18
	::Class_2_457D0122ED665AFE_Class_1_A55A17DBD171A840* Field_2_3; // 0x20
	::Class_2_45534E9ACEDAE009* Field_2_1; // 0x28
	::Class_2_3D16FBC32AAD2673* Field_2_2; // 0x30

	::System::Void _ctor(::MoleMole::CameraModuleAvatarDataConfigExt* a1, ::MoleMole::Cameras::CameraDataAccessor* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraModuleAvatarDataConfigExt*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_2_457D0122ED665AFE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5FF3D794AAC76116(::MoleMole::CameraModuleAvatarDataConfigExt* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraModuleAvatarDataConfigExt*))((::PBYTE)hIl2Cpp + CLASS_2_457D0122ED665AFE_METHOD_2_5FF3D794AAC76116_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_94F261199A6AC853(::Cinemachine::CameraState& a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_457D0122ED665AFE_METHOD_2_94F261199A6AC853_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_9ED7637DBE55A9AE(::Cinemachine::CameraState& a1, ::System::Single a2, ::MoleMole::CustomCollisionConfigData_CustomCollisionAlgorithm a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single, ::MoleMole::CustomCollisionConfigData_CustomCollisionAlgorithm))((::PBYTE)hIl2Cpp + CLASS_2_457D0122ED665AFE_METHOD_2_9ED7637DBE55A9AE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_04DC58A6E3312864(::MoleMole::CameraModuleAvatarDataConfigExt* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraModuleAvatarDataConfigExt*))((::PBYTE)hIl2Cpp + CLASS_2_457D0122ED665AFE_METHOD_2_04DC58A6E3312864_OFFSET))(this, a1);
	}

	::System::Void Method_2_57119881929565D0(::Cinemachine::CameraState& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_457D0122ED665AFE_METHOD_2_57119881929565D0_OFFSET))(this, a1, a2);
	}
};
