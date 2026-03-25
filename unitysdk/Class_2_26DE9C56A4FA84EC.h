#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5B0B78CFE6F65A6A.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }
namespace RPG::Client { class ResultModuleConfig; }

#define CLASS_2_26DE9C56A4FA84EC_METHOD_2_1C298FA6BB9350FA_OFFSET UNITYSDK_OFFSET(0x10568BF0)
#define CLASS_2_26DE9C56A4FA84EC_METHOD_2_3A599F23178B2776_OFFSET UNITYSDK_OFFSET(0x10569B20)
#define CLASS_2_26DE9C56A4FA84EC_METHOD_2_41146E620D694011_OFFSET UNITYSDK_OFFSET(0x10568EB0)
#define CLASS_2_26DE9C56A4FA84EC_METHOD_2_6005C60D45739FA7_OFFSET UNITYSDK_OFFSET(0x1056AAA0)
#define CLASS_2_26DE9C56A4FA84EC_METHOD_2_6BA7BB45F0BA72F4_OFFSET UNITYSDK_OFFSET(0x105695C0)
#define CLASS_2_26DE9C56A4FA84EC_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1056A9D0)
#define CLASS_2_26DE9C56A4FA84EC_METHOD_2_9CDDA330CD3329E0_OFFSET UNITYSDK_OFFSET(0x10568AC0)
#define CLASS_2_26DE9C56A4FA84EC_METHOD_2_9D199E2FEC724B45_OFFSET UNITYSDK_OFFSET(0x1056AD20)
#define CLASS_2_26DE9C56A4FA84EC_METHOD_2_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0x10568E00)
#define CLASS_2_26DE9C56A4FA84EC_METHOD_2_AB2D01D8EE802F85_OFFSET UNITYSDK_OFFSET(0x1056A970)
#define CLASS_2_26DE9C56A4FA84EC_METHOD_2_AFDBE2353EC32F1F_OFFSET UNITYSDK_OFFSET(0x1056B420)
#define CLASS_2_26DE9C56A4FA84EC_METHOD_2_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0x105699B0)
#define CLASS_2_26DE9C56A4FA84EC_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1056A7C0)
#define CLASS_2_26DE9C56A4FA84EC_METHOD_2_CC49A9D3889547F1_OFFSET UNITYSDK_OFFSET(0x1056B1C0)
#define CLASS_2_26DE9C56A4FA84EC_METHOD_2_CDFAED29AF1DFDB8_OFFSET UNITYSDK_OFFSET(0x1056A800)
#define CLASS_2_26DE9C56A4FA84EC_METHOD_2_FE53B6F7EE7FAEE0_OFFSET UNITYSDK_OFFSET(0x1056AE60)
#define CLASS_2_26DE9C56A4FA84EC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1056B400)
#define CLASS_2_26DE9C56A4FA84EC__CTOR_1_OFFSET UNITYSDK_OFFSET(0x10568A30)
#define CLASS_2_26DE9C56A4FA84EC__CTOR_OFFSET UNITYSDK_OFFSET(0x105689F0)

inline static constexpr unsigned int Class_2_26DE9C56A4FA84EC_TypeDefinitionIndex = 56935;

class Class_2_26DE9C56A4FA84EC : public ::Class_1_5B0B78CFE6F65A6A
{
public:
	static ::System::Single* StaticGet_Field_2_3()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_26DE9C56A4FA84EC_TypeDefinitionIndex)->GetStaticField(0xCF60);
	}
	static ::System::Int32* StaticGet_Field_2_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_26DE9C56A4FA84EC_TypeDefinitionIndex)->GetStaticField(0xCF64);
	}
	::Il2CppArray<::UnityEngine::Vector3>* Field_2_4; // 0x38
	::RPG::Client::ResultModuleConfig* Field_2_1; // 0x40
	::System::Int32 Field_2_5; // 0x48
	::System::Boolean Field_2_0; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26DE9C56A4FA84EC__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + CLASS_2_26DE9C56A4FA84EC__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_26DE9C56A4FA84EC__CCTOR_OFFSET))();
	}

	::System::Void Method_2_9CDDA330CD3329E0(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_26DE9C56A4FA84EC_METHOD_2_9CDDA330CD3329E0_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_1C298FA6BB9350FA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26DE9C56A4FA84EC_METHOD_2_1C298FA6BB9350FA_OFFSET))(this);
	}

	::System::Void Method_2_9E38127F40B34F1F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26DE9C56A4FA84EC_METHOD_2_9E38127F40B34F1F_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26DE9C56A4FA84EC_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CDFAED29AF1DFDB8(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_26DE9C56A4FA84EC_METHOD_2_CDFAED29AF1DFDB8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_41146E620D694011()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26DE9C56A4FA84EC_METHOD_2_41146E620D694011_OFFSET))(this);
	}

	::System::Void Method_2_6BA7BB45F0BA72F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26DE9C56A4FA84EC_METHOD_2_6BA7BB45F0BA72F4_OFFSET))(this);
	}

	::System::Void Method_2_BBA49FAB086F388D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26DE9C56A4FA84EC_METHOD_2_BBA49FAB086F388D_OFFSET))(this);
	}

	::System::Void Method_2_3A599F23178B2776()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26DE9C56A4FA84EC_METHOD_2_3A599F23178B2776_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26DE9C56A4FA84EC_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_9D199E2FEC724B45(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_26DE9C56A4FA84EC_METHOD_2_9D199E2FEC724B45_OFFSET))(this, a1);
	}

	::System::Void Method_2_6005C60D45739FA7(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_26DE9C56A4FA84EC_METHOD_2_6005C60D45739FA7_OFFSET))(this, a1);
	}

	::System::Void Method_2_AB2D01D8EE802F85(::UnityEngine::Vector3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_26DE9C56A4FA84EC_METHOD_2_AB2D01D8EE802F85_OFFSET))(this, a1);
	}

	::System::Void Method_2_FE53B6F7EE7FAEE0(::UnityEngine::Vector3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_26DE9C56A4FA84EC_METHOD_2_FE53B6F7EE7FAEE0_OFFSET))(this, a1);
	}

	::System::Void Method_2_CC49A9D3889547F1(::UnityEngine::Vector3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_26DE9C56A4FA84EC_METHOD_2_CC49A9D3889547F1_OFFSET))(this, a1);
	}

	::System::Void Method_2_AFDBE2353EC32F1F(::RPG::Client::PipelineCameraEngine* P0, ::RPG::Client::CameraModuleConfigCollection* P1, ::RPG::Client::PipelineCameraGlobalConfig* P2, ::RPG::Client::CameraDataAndFlags* P3, ::RPG::Client::CameraModuleType P4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_26DE9C56A4FA84EC_METHOD_2_AFDBE2353EC32F1F_OFFSET))(this, P0, P1, P2, P3, P4);
	}
};
