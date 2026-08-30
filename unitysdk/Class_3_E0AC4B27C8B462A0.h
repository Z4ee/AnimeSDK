#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvPassByValueClientOnly; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_3_E0AC4B27C8B462A0_METHOD_3_2098566AA37CF374_OFFSET UNITYSDK_OFFSET(0x1951BF60)
#define CLASS_3_E0AC4B27C8B462A0_METHOD_3_4704B221359C4DC6_OFFSET UNITYSDK_OFFSET(0x1951B820)
#define CLASS_3_E0AC4B27C8B462A0_METHOD_3_72CA835AE372D9CC_OFFSET UNITYSDK_OFFSET(0x1951A860)
#define CLASS_3_E0AC4B27C8B462A0_METHOD_3_8A2ED1AADCEE2815_OFFSET UNITYSDK_OFFSET(0x1951AC40)
#define CLASS_3_E0AC4B27C8B462A0_METHOD_3_9975A5DA8EDCD407_OFFSET UNITYSDK_OFFSET(0x1951BB90)
#define CLASS_3_E0AC4B27C8B462A0_METHOD_3_A708FE896EFF5D05_OFFSET UNITYSDK_OFFSET(0x1951A990)
#define CLASS_3_E0AC4B27C8B462A0_METHOD_3_C710FBC03021BE64_OFFSET UNITYSDK_OFFSET(0x1951ADB0)
#define CLASS_3_E0AC4B27C8B462A0_METHOD_3_CD9438B5B1578E78_OFFSET UNITYSDK_OFFSET(0x1951B0D0)
#define CLASS_3_E0AC4B27C8B462A0_METHOD_3_F67D2D6DDFA2FBEA_OFFSET UNITYSDK_OFFSET(0x1951AAA0)
#define CLASS_3_E0AC4B27C8B462A0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1951A780)
#define CLASS_3_E0AC4B27C8B462A0__CTOR_OFFSET UNITYSDK_OFFSET(0x1951A750)

inline static constexpr unsigned int Class_3_E0AC4B27C8B462A0_TypeDefinitionIndex = 52738;

class Class_3_E0AC4B27C8B462A0 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvPassByValueClientOnly*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvPassByValueClientOnly* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvPassByValueClientOnly*))((::PBYTE)hIl2Cpp + CLASS_3_E0AC4B27C8B462A0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E0AC4B27C8B462A0_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Object* Method_3_F67D2D6DDFA2FBEA(::System::String* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_E0AC4B27C8B462A0_METHOD_3_F67D2D6DDFA2FBEA_OFFSET))(this, a1);
	}

	::System::Object* Method_3_8A2ED1AADCEE2815(::System::String* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_E0AC4B27C8B462A0_METHOD_3_8A2ED1AADCEE2815_OFFSET))(this, a1);
	}

	::System::Object* Method_3_C710FBC03021BE64(::System::String* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_E0AC4B27C8B462A0_METHOD_3_C710FBC03021BE64_OFFSET))(this, a1);
	}

	::System::Object* Method_3_CD9438B5B1578E78(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Object*(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_E0AC4B27C8B462A0_METHOD_3_CD9438B5B1578E78_OFFSET))(this, a1, a2);
	}

	::System::Object* Method_3_72CA835AE372D9CC(::System::String* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_E0AC4B27C8B462A0_METHOD_3_72CA835AE372D9CC_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_4704B221359C4DC6(::System::String* a1, ::System::Object* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_E0AC4B27C8B462A0_METHOD_3_4704B221359C4DC6_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_9975A5DA8EDCD407(::System::String* a1, ::System::Object* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_E0AC4B27C8B462A0_METHOD_3_9975A5DA8EDCD407_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_2098566AA37CF374(::System::String* a1, ::System::UInt32 a2, ::System::Object* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_E0AC4B27C8B462A0_METHOD_3_2098566AA37CF374_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_A708FE896EFF5D05(::System::String* a1, ::System::Object* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_E0AC4B27C8B462A0_METHOD_3_A708FE896EFF5D05_OFFSET))(this, a1, a2);
	}
};
