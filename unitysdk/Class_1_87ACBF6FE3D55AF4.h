#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_87ACBF6FE3D55AF4_Struct_2_95931608322B6C4F.h"
#include "unitysdk/RPG/GameCore/FiveDimVCameraBlendHint.h"
#include "unitysdk/System/Object.h"

namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client::LittleGame::FiveDim { class FiveDimMonoCamera; }
namespace RPG::GameCore { class FiveDimVCameraBlendConfig; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_87ACBF6FE3D55AF4_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x11B9FA10)
#define CLASS_1_87ACBF6FE3D55AF4_METHOD_1_31B774790EDB9109_OFFSET UNITYSDK_OFFSET(0x11B9FE40)
#define CLASS_1_87ACBF6FE3D55AF4_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x11B9FAA0)
#define CLASS_1_87ACBF6FE3D55AF4_METHOD_1_58FF8798D5ABA5C7_OFFSET UNITYSDK_OFFSET(0x11B9FC80)
#define CLASS_1_87ACBF6FE3D55AF4_METHOD_1_91FF12BFE1884E93_OFFSET UNITYSDK_OFFSET(0x11BA0270)
#define CLASS_1_87ACBF6FE3D55AF4_METHOD_1_CFA22D502D5159E6_OFFSET UNITYSDK_OFFSET(0x11B9F8C0)
#define CLASS_1_87ACBF6FE3D55AF4_METHOD_1_D9B54C357E2EFE1A_OFFSET UNITYSDK_OFFSET(0x11BA02D0)
#define CLASS_1_87ACBF6FE3D55AF4_METHOD_1_DB5D08FEC06EE34E_OFFSET UNITYSDK_OFFSET(0x11BA01F0)
#define CLASS_1_87ACBF6FE3D55AF4_METHOD_1_E5130DE3B4602EF4_OFFSET UNITYSDK_OFFSET(0x11B9F8B0)
#define CLASS_1_87ACBF6FE3D55AF4_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x11B9F8A0)
#define CLASS_1_87ACBF6FE3D55AF4__CCTOR_OFFSET UNITYSDK_OFFSET(0x11BA0340)
#define CLASS_1_87ACBF6FE3D55AF4__CTOR_OFFSET UNITYSDK_OFFSET(0x11B9F890)

inline static constexpr unsigned int Class_1_87ACBF6FE3D55AF4_TypeDefinitionIndex = 70573;

class Class_1_87ACBF6FE3D55AF4 : public ::System::Object
{
public:
	static ::RPG::GameCore::FiveDimVCameraBlendConfig** StaticGet_Field_1_4()
	{
		return (::RPG::GameCore::FiveDimVCameraBlendConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_87ACBF6FE3D55AF4_TypeDefinitionIndex)->GetStaticField(0x28DA0);
	}
	::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* Field_1_1; // 0x10
	::System::Action_1<::Class_1_87ACBF6FE3D55AF4_Struct_2_95931608322B6C4F>* Field_1_0; // 0x18
	::RPG::GameCore::FiveDimVCameraBlendConfig* Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x28

	::System::Void _ctor(::System::Action_1<::Class_1_87ACBF6FE3D55AF4_Struct_2_95931608322B6C4F>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_87ACBF6FE3D55AF4_Struct_2_95931608322B6C4F>*))((::PBYTE)hIl2Cpp + CLASS_1_87ACBF6FE3D55AF4__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_87ACBF6FE3D55AF4__CCTOR_OFFSET))();
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87ACBF6FE3D55AF4_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* Method_1_E5130DE3B4602EF4()
	{
		return ((::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87ACBF6FE3D55AF4_METHOD_1_E5130DE3B4602EF4_OFFSET))(this);
	}

	::System::Void Method_1_CFA22D502D5159E6(::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* a1, ::RPG::GameCore::FiveDimVCameraBlendConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*, ::RPG::GameCore::FiveDimVCameraBlendConfig*))((::PBYTE)hIl2Cpp + CLASS_1_87ACBF6FE3D55AF4_METHOD_1_CFA22D502D5159E6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87ACBF6FE3D55AF4_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_DB5D08FEC06EE34E(::RPG::GameCore::FiveDimVCameraBlendConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimVCameraBlendConfig*))((::PBYTE)hIl2Cpp + CLASS_1_87ACBF6FE3D55AF4_METHOD_1_DB5D08FEC06EE34E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_91FF12BFE1884E93()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87ACBF6FE3D55AF4_METHOD_1_91FF12BFE1884E93_OFFSET))(this);
	}

	static ::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_87ACBF6FE3D55AF4_METHOD_1_41A074549EF25F63_OFFSET))();
	}

	static ::System::Void Method_1_58FF8798D5ABA5C7(::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* a1)
	{
		return ((::System::Void(*)(::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*))((::PBYTE)hIl2Cpp + CLASS_1_87ACBF6FE3D55AF4_METHOD_1_58FF8798D5ABA5C7_OFFSET))(a1);
	}

	static ::System::Void Method_1_31B774790EDB9109(::RPG::GameCore::FiveDimVCameraBlendConfig* a1, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::FiveDimVCameraBlendConfig*, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*))((::PBYTE)hIl2Cpp + CLASS_1_87ACBF6FE3D55AF4_METHOD_1_31B774790EDB9109_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D9B54C357E2EFE1A(::RPG::GameCore::FiveDimVCameraBlendHint a1, ::Cinemachine::CinemachineVirtualCamera* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::FiveDimVCameraBlendHint, ::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + CLASS_1_87ACBF6FE3D55AF4_METHOD_1_D9B54C357E2EFE1A_OFFSET))(a1, a2);
	}
};
