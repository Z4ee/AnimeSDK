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

#define CLASS_2_C0093596BF0EEBA7_METHOD_2_1AFF05DC1082906B_OFFSET UNITYSDK_OFFSET(0x1190B030)
#define CLASS_2_C0093596BF0EEBA7_METHOD_2_24B05D2E15A5C3C8_OFFSET UNITYSDK_OFFSET(0x1190A6E0)
#define CLASS_2_C0093596BF0EEBA7_METHOD_2_39D78A8EB32A5315_OFFSET UNITYSDK_OFFSET(0x1190A4B0)
#define CLASS_2_C0093596BF0EEBA7_METHOD_2_4011FDBF39CB0C46_OFFSET UNITYSDK_OFFSET(0x1190AD90)
#define CLASS_2_C0093596BF0EEBA7_METHOD_2_4C56337E568CD1F4_OFFSET UNITYSDK_OFFSET(0x1190A300)
#define CLASS_2_C0093596BF0EEBA7_METHOD_2_5E1DEB65802F4A59_OFFSET UNITYSDK_OFFSET(0x1190AC80)
#define CLASS_2_C0093596BF0EEBA7_METHOD_2_7A6818D24D36DCBD_OFFSET UNITYSDK_OFFSET(0x1190AEC0)
#define CLASS_2_C0093596BF0EEBA7_METHOD_2_B036E5806AE655F4_OFFSET UNITYSDK_OFFSET(0x1190A600)
#define CLASS_2_C0093596BF0EEBA7_METHOD_2_DD325FEFA053DBEF_OFFSET UNITYSDK_OFFSET(0x1190B200)
#define CLASS_2_C0093596BF0EEBA7__CCTOR_OFFSET UNITYSDK_OFFSET(0x1190B1B0)
#define CLASS_2_C0093596BF0EEBA7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1190A2D0)
#define CLASS_2_C0093596BF0EEBA7__CTOR_OFFSET UNITYSDK_OFFSET(0x1190A2C0)

inline static constexpr unsigned int Class_2_C0093596BF0EEBA7_TypeDefinitionIndex = 65091;

class Class_2_C0093596BF0EEBA7 : public ::Class_1_5B0B78CFE6F65A6A
{
public:
	static ::Il2CppArray<::RPG::GameCore::CharacterVisibleReason>** StaticGet_Field_2_0()
	{
		return (::Il2CppArray<::RPG::GameCore::CharacterVisibleReason>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C0093596BF0EEBA7_TypeDefinitionIndex)->GetStaticField(0x19230);
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

	::System::Void Method_2_B036E5806AE655F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C0093596BF0EEBA7_METHOD_2_B036E5806AE655F4_OFFSET))(this);
	}

	::System::Void Method_2_24B05D2E15A5C3C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C0093596BF0EEBA7_METHOD_2_24B05D2E15A5C3C8_OFFSET))(this);
	}

	static ::System::Boolean Method_2_4011FDBF39CB0C46(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_C0093596BF0EEBA7_METHOD_2_4011FDBF39CB0C46_OFFSET))(a1);
	}

	::System::Void Method_2_5E1DEB65802F4A59(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2, ::RPG::GameCore::CharacterVisibleReason a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::RPG::GameCore::CharacterVisibleReason))((::PBYTE)hIl2Cpp + CLASS_2_C0093596BF0EEBA7_METHOD_2_5E1DEB65802F4A59_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_7A6818D24D36DCBD(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C0093596BF0EEBA7_METHOD_2_7A6818D24D36DCBD_OFFSET))(this, a1);
	}

	::System::Void Method_2_1AFF05DC1082906B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C0093596BF0EEBA7_METHOD_2_1AFF05DC1082906B_OFFSET))(this, a1);
	}

	::System::Void Method_2_DD325FEFA053DBEF(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_C0093596BF0EEBA7_METHOD_2_DD325FEFA053DBEF_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
