#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4A7F3B1CD6560F7E.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
#include "unitysdk/RPG/GameCore/CharacterVisibleReason.h"

namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_C0093596BF0EEBA7_METHOD_2_0D64F99BAAA7B5C4_OFFSET UNITYSDK_OFFSET(0x140BBBC0)
#define CLASS_2_C0093596BF0EEBA7_METHOD_2_39D78A8EB32A5315_OFFSET UNITYSDK_OFFSET(0x140BB0F0)
#define CLASS_2_C0093596BF0EEBA7_METHOD_2_4011FDBF39CB0C46_OFFSET UNITYSDK_OFFSET(0x140BB960)
#define CLASS_2_C0093596BF0EEBA7_METHOD_2_4C56337E568CD1F4_OFFSET UNITYSDK_OFFSET(0x140BAF40)
#define CLASS_2_C0093596BF0EEBA7_METHOD_2_5E1DEB65802F4A59_OFFSET UNITYSDK_OFFSET(0x140BB850)
#define CLASS_2_C0093596BF0EEBA7_METHOD_2_8F6A1B72899F4EA4_OFFSET UNITYSDK_OFFSET(0x140BB240)
#define CLASS_2_C0093596BF0EEBA7_METHOD_2_9F8F6511E8EF1235_OFFSET UNITYSDK_OFFSET(0x140BB320)
#define CLASS_2_C0093596BF0EEBA7_METHOD_2_AA7E7D1E175DAB81_OFFSET UNITYSDK_OFFSET(0x140BBA90)
#define CLASS_2_C0093596BF0EEBA7__CCTOR_OFFSET UNITYSDK_OFFSET(0x140BBCE0)
#define CLASS_2_C0093596BF0EEBA7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x140BADE0)
#define CLASS_2_C0093596BF0EEBA7__CTOR_OFFSET UNITYSDK_OFFSET(0x140BADD0)

inline static constexpr unsigned int Class_2_C0093596BF0EEBA7_TypeDefinitionIndex = 66496;

class Class_2_C0093596BF0EEBA7 : public ::Class_1_4A7F3B1CD6560F7E
{
public:
	static ::Il2CppArray<::RPG::GameCore::CharacterVisibleReason>** StaticGet_Field_2_0()
	{
		return (::Il2CppArray<::RPG::GameCore::CharacterVisibleReason>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C0093596BF0EEBA7_TypeDefinitionIndex)->GetStaticField(0xF130);
	}
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_1; // 0x38
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_2; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C0093596BF0EEBA7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + CLASS_2_C0093596BF0EEBA7__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C0093596BF0EEBA7__CCTOR_OFFSET))();
	}

	::System::Void Method_2_4C56337E568CD1F4(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_C0093596BF0EEBA7_METHOD_2_4C56337E568CD1F4_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_39D78A8EB32A5315()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C0093596BF0EEBA7_METHOD_2_39D78A8EB32A5315_OFFSET))(this);
	}

	::System::Void Method_2_8F6A1B72899F4EA4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C0093596BF0EEBA7_METHOD_2_8F6A1B72899F4EA4_OFFSET))(this);
	}

	::System::Void Method_2_9F8F6511E8EF1235()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C0093596BF0EEBA7_METHOD_2_9F8F6511E8EF1235_OFFSET))(this);
	}

	static ::System::Boolean Method_2_4011FDBF39CB0C46(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_C0093596BF0EEBA7_METHOD_2_4011FDBF39CB0C46_OFFSET))(a1);
	}

	::System::Void Method_2_5E1DEB65802F4A59(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2, ::RPG::GameCore::CharacterVisibleReason a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::RPG::GameCore::CharacterVisibleReason))((::PBYTE)hIl2Cpp + CLASS_2_C0093596BF0EEBA7_METHOD_2_5E1DEB65802F4A59_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_AA7E7D1E175DAB81(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C0093596BF0EEBA7_METHOD_2_AA7E7D1E175DAB81_OFFSET))(this, a1);
	}

	::System::Void Method_2_0D64F99BAAA7B5C4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C0093596BF0EEBA7_METHOD_2_0D64F99BAAA7B5C4_OFFSET))(this, a1);
	}
};
