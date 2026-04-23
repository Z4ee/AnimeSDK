#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5B0B78CFE6F65A6A.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
#include "unitysdk/RPG/GameCore/CharacterVisibleReason.h"

namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_32E40C27905117EF_METHOD_2_39D78A8EB32A5315_OFFSET UNITYSDK_OFFSET(0x12996B60)
#define CLASS_2_32E40C27905117EF_METHOD_2_3A599F23178B2776_OFFSET UNITYSDK_OFFSET(0x12996D50)
#define CLASS_2_32E40C27905117EF_METHOD_2_4011FDBF39CB0C46_OFFSET UNITYSDK_OFFSET(0x12997210)
#define CLASS_2_32E40C27905117EF_METHOD_2_4F6CB99543AF5BF6_OFFSET UNITYSDK_OFFSET(0x12996CB0)
#define CLASS_2_32E40C27905117EF_METHOD_2_5E1DEB65802F4A59_OFFSET UNITYSDK_OFFSET(0x12997100)
#define CLASS_2_32E40C27905117EF_METHOD_2_9871B2ED609502A4_OFFSET UNITYSDK_OFFSET(0x129974B0)
#define CLASS_2_32E40C27905117EF_METHOD_2_AFDBE2353EC32F1F_OFFSET UNITYSDK_OFFSET(0x12997630)
#define CLASS_2_32E40C27905117EF_METHOD_2_B52CEFFA9F577314_OFFSET UNITYSDK_OFFSET(0x129969D0)
#define CLASS_2_32E40C27905117EF_METHOD_2_FAC1A2CEF0BE5FB4_OFFSET UNITYSDK_OFFSET(0x12997340)
#define CLASS_2_32E40C27905117EF__CCTOR_OFFSET UNITYSDK_OFFSET(0x129975C0)
#define CLASS_2_32E40C27905117EF__CTOR_1_OFFSET UNITYSDK_OFFSET(0x129969A0)
#define CLASS_2_32E40C27905117EF__CTOR_OFFSET UNITYSDK_OFFSET(0x12996990)

inline static constexpr unsigned int Class_2_32E40C27905117EF_TypeDefinitionIndex = 64170;

class Class_2_32E40C27905117EF : public ::Class_1_5B0B78CFE6F65A6A
{
public:
	static ::Il2CppArray<::RPG::GameCore::CharacterVisibleReason>** StaticGet_Field_2_0()
	{
		return (::Il2CppArray<::RPG::GameCore::CharacterVisibleReason>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_32E40C27905117EF_TypeDefinitionIndex)->GetStaticField(0x30BD0);
	}
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_2; // 0x38
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32E40C27905117EF__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + CLASS_2_32E40C27905117EF__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_32E40C27905117EF__CCTOR_OFFSET))();
	}

	::System::Void Method_2_B52CEFFA9F577314(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_32E40C27905117EF_METHOD_2_B52CEFFA9F577314_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_39D78A8EB32A5315()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32E40C27905117EF_METHOD_2_39D78A8EB32A5315_OFFSET))(this);
	}

	::System::Void Method_2_4F6CB99543AF5BF6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32E40C27905117EF_METHOD_2_4F6CB99543AF5BF6_OFFSET))(this);
	}

	::System::Void Method_2_3A599F23178B2776()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32E40C27905117EF_METHOD_2_3A599F23178B2776_OFFSET))(this);
	}

	static ::System::Boolean Method_2_4011FDBF39CB0C46(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_32E40C27905117EF_METHOD_2_4011FDBF39CB0C46_OFFSET))(a1);
	}

	::System::Void Method_2_5E1DEB65802F4A59(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2, ::RPG::GameCore::CharacterVisibleReason a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::RPG::GameCore::CharacterVisibleReason))((::PBYTE)hIl2Cpp + CLASS_2_32E40C27905117EF_METHOD_2_5E1DEB65802F4A59_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_FAC1A2CEF0BE5FB4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_32E40C27905117EF_METHOD_2_FAC1A2CEF0BE5FB4_OFFSET))(this, a1);
	}

	::System::Void Method_2_9871B2ED609502A4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_32E40C27905117EF_METHOD_2_9871B2ED609502A4_OFFSET))(this, a1);
	}

	::System::Void Method_2_AFDBE2353EC32F1F(::RPG::Client::PipelineCameraEngine* P0, ::RPG::Client::CameraModuleConfigCollection* P1, ::RPG::Client::PipelineCameraGlobalConfig* P2, ::RPG::Client::CameraDataAndFlags* P3, ::RPG::Client::CameraModuleType P4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_32E40C27905117EF_METHOD_2_AFDBE2353EC32F1F_OFFSET))(this, P0, P1, P2, P3, P4);
	}
};
