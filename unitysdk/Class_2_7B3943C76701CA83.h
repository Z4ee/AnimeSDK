#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4A7F3B1CD6560F7E.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }
namespace RPG::Client { class ResultModuleConfig; }

#define CLASS_2_7B3943C76701CA83_METHOD_2_1C298FA6BB9350FA_OFFSET UNITYSDK_OFFSET(0x16D90E40)
#define CLASS_2_7B3943C76701CA83_METHOD_2_41146E620D694011_OFFSET UNITYSDK_OFFSET(0x16D91100)
#define CLASS_2_7B3943C76701CA83_METHOD_2_458DAEAB6170C584_OFFSET UNITYSDK_OFFSET(0x16D91050)
#define CLASS_2_7B3943C76701CA83_METHOD_2_464B80C09A37526F_OFFSET UNITYSDK_OFFSET(0x16D91D50)
#define CLASS_2_7B3943C76701CA83_METHOD_2_6005C60D45739FA7_OFFSET UNITYSDK_OFFSET(0x16D92EE0)
#define CLASS_2_7B3943C76701CA83_METHOD_2_688863E66494D7C7_OFFSET UNITYSDK_OFFSET(0x16D92DB0)
#define CLASS_2_7B3943C76701CA83_METHOD_2_6BA7BB45F0BA72F4_OFFSET UNITYSDK_OFFSET(0x16D917E0)
#define CLASS_2_7B3943C76701CA83_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x16D92E10)
#define CLASS_2_7B3943C76701CA83_METHOD_2_9B18C788922A0B6F_OFFSET UNITYSDK_OFFSET(0x16D93620)
#define CLASS_2_7B3943C76701CA83_METHOD_2_9D199E2FEC724B45_OFFSET UNITYSDK_OFFSET(0x16D93160)
#define CLASS_2_7B3943C76701CA83_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16D92BD0)
#define CLASS_2_7B3943C76701CA83_METHOD_2_CAB57E692BC0A4DE_OFFSET UNITYSDK_OFFSET(0x16D92C10)
#define CLASS_2_7B3943C76701CA83_METHOD_2_E52129E82CD2D7F8_OFFSET UNITYSDK_OFFSET(0x16D91BE0)
#define CLASS_2_7B3943C76701CA83_METHOD_2_E71A958DC020C7A7_OFFSET UNITYSDK_OFFSET(0x16D90D10)
#define CLASS_2_7B3943C76701CA83_METHOD_2_FE53B6F7EE7FAEE0_OFFSET UNITYSDK_OFFSET(0x16D932A0)
#define CLASS_2_7B3943C76701CA83__CCTOR_OFFSET UNITYSDK_OFFSET(0x16D93880)
#define CLASS_2_7B3943C76701CA83__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16D90C20)
#define CLASS_2_7B3943C76701CA83__CTOR_OFFSET UNITYSDK_OFFSET(0x16D90BE0)

inline static constexpr unsigned int Class_2_7B3943C76701CA83_TypeDefinitionIndex = 66511;

class Class_2_7B3943C76701CA83 : public ::Class_1_4A7F3B1CD6560F7E
{
public:
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_7B3943C76701CA83_TypeDefinitionIndex)->GetStaticField(0x12F60);
	}
	static ::System::Single* StaticGet_Field_2_1()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_7B3943C76701CA83_TypeDefinitionIndex)->GetStaticField(0x12F64);
	}
	::RPG::Client::ResultModuleConfig* Field_2_2; // 0x38
	::Il2CppArray<::UnityEngine::Vector3>* Field_2_3; // 0x40
	::System::Int32 Field_2_4; // 0x48
	::System::Boolean Field_2_5; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B3943C76701CA83__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + CLASS_2_7B3943C76701CA83__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_7B3943C76701CA83__CCTOR_OFFSET))();
	}

	::System::Void Method_2_E71A958DC020C7A7(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_7B3943C76701CA83_METHOD_2_E71A958DC020C7A7_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_1C298FA6BB9350FA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B3943C76701CA83_METHOD_2_1C298FA6BB9350FA_OFFSET))(this);
	}

	::System::Void Method_2_458DAEAB6170C584()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B3943C76701CA83_METHOD_2_458DAEAB6170C584_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B3943C76701CA83_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CAB57E692BC0A4DE(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7B3943C76701CA83_METHOD_2_CAB57E692BC0A4DE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_41146E620D694011()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B3943C76701CA83_METHOD_2_41146E620D694011_OFFSET))(this);
	}

	::System::Void Method_2_6BA7BB45F0BA72F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B3943C76701CA83_METHOD_2_6BA7BB45F0BA72F4_OFFSET))(this);
	}

	::System::Void Method_2_E52129E82CD2D7F8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B3943C76701CA83_METHOD_2_E52129E82CD2D7F8_OFFSET))(this);
	}

	::System::Void Method_2_464B80C09A37526F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B3943C76701CA83_METHOD_2_464B80C09A37526F_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B3943C76701CA83_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_9D199E2FEC724B45(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_7B3943C76701CA83_METHOD_2_9D199E2FEC724B45_OFFSET))(this, a1);
	}

	::System::Void Method_2_6005C60D45739FA7(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_7B3943C76701CA83_METHOD_2_6005C60D45739FA7_OFFSET))(this, a1);
	}

	::System::Void Method_2_688863E66494D7C7(::UnityEngine::Vector3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_7B3943C76701CA83_METHOD_2_688863E66494D7C7_OFFSET))(this, a1);
	}

	::System::Void Method_2_FE53B6F7EE7FAEE0(::UnityEngine::Vector3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_7B3943C76701CA83_METHOD_2_FE53B6F7EE7FAEE0_OFFSET))(this, a1);
	}

	::System::Void Method_2_9B18C788922A0B6F(::UnityEngine::Vector3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_7B3943C76701CA83_METHOD_2_9B18C788922A0B6F_OFFSET))(this, a1);
	}
};
