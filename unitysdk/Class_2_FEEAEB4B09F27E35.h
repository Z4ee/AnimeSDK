#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Class_1_194AF035DF2F7DB0.h"
#include "unitysdk/MoleMole/CustomCollisionConfigData_CustomCollisionAlgorithm.h"

class Class_2_45534E9ACEDAE009;
class Class_2_4F3CAB00D6BE86CE;
class Class_2_823B87587A6A376C;
class Class_2_FEEAEB4B09F27E35_Class_1_A55A17DBD171A840;
namespace MoleMole { class CameraModuleAvatarDataConfigExt; }
namespace MoleMole::Cameras { class CameraDataAccessor; }

#define CLASS_2_FEEAEB4B09F27E35_METHOD_2_04DC58A6E3312864_OFFSET UNITYSDK_OFFSET(0x126EDFB0)
#define CLASS_2_FEEAEB4B09F27E35_METHOD_2_4B776E37447DC69C_OFFSET UNITYSDK_OFFSET(0x126EDA20)
#define CLASS_2_FEEAEB4B09F27E35_METHOD_2_57119881929565D0_OFFSET UNITYSDK_OFFSET(0x126EDF40)
#define CLASS_2_FEEAEB4B09F27E35_METHOD_2_5FF3D794AAC76116_OFFSET UNITYSDK_OFFSET(0x126ED870)
#define CLASS_2_FEEAEB4B09F27E35_METHOD_2_9F22E52DAA1804B7_OFFSET UNITYSDK_OFFSET(0x126EDAD0)
#define CLASS_2_FEEAEB4B09F27E35__CTOR_OFFSET UNITYSDK_OFFSET(0x126ED710)

inline static constexpr unsigned int Class_2_FEEAEB4B09F27E35_TypeDefinitionIndex = 74501;

class Class_2_FEEAEB4B09F27E35 : public ::Class_1_194AF035DF2F7DB0
{
public:
	::Class_2_45534E9ACEDAE009* Field_2_0; // 0x18
	::Class_2_4F3CAB00D6BE86CE* Field_2_7; // 0x20
	::Class_2_823B87587A6A376C* Field_2_1; // 0x28
	::Class_2_FEEAEB4B09F27E35_Class_1_A55A17DBD171A840* Field_2_6; // 0x30

	::System::Void _ctor(::MoleMole::CameraModuleAvatarDataConfigExt* a1, ::MoleMole::Cameras::CameraDataAccessor* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraModuleAvatarDataConfigExt*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_2_FEEAEB4B09F27E35__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5FF3D794AAC76116(::MoleMole::CameraModuleAvatarDataConfigExt* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraModuleAvatarDataConfigExt*))((::PBYTE)hIl2Cpp + CLASS_2_FEEAEB4B09F27E35_METHOD_2_5FF3D794AAC76116_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_4B776E37447DC69C(::Cinemachine::CameraState& a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FEEAEB4B09F27E35_METHOD_2_4B776E37447DC69C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_57119881929565D0(::Cinemachine::CameraState& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FEEAEB4B09F27E35_METHOD_2_57119881929565D0_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_9F22E52DAA1804B7(::Cinemachine::CameraState& a1, ::System::Single a2, ::MoleMole::CustomCollisionConfigData_CustomCollisionAlgorithm a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single, ::MoleMole::CustomCollisionConfigData_CustomCollisionAlgorithm))((::PBYTE)hIl2Cpp + CLASS_2_FEEAEB4B09F27E35_METHOD_2_9F22E52DAA1804B7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_04DC58A6E3312864(::MoleMole::CameraModuleAvatarDataConfigExt* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraModuleAvatarDataConfigExt*))((::PBYTE)hIl2Cpp + CLASS_2_FEEAEB4B09F27E35_METHOD_2_04DC58A6E3312864_OFFSET))(this, a1);
	}
};
