#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvPassByValueClientOnly; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_3_22F38E8E70E2CACF_METHOD_3_1CCC16D1E4B886AF_OFFSET UNITYSDK_OFFSET(0xC203270)
#define CLASS_3_22F38E8E70E2CACF_METHOD_3_228BD3246DD480F3_OFFSET UNITYSDK_OFFSET(0xC2026D0)
#define CLASS_3_22F38E8E70E2CACF_METHOD_3_57218037E49F4670_OFFSET UNITYSDK_OFFSET(0xC202CF0)
#define CLASS_3_22F38E8E70E2CACF_METHOD_3_747811351AF4777E_OFFSET UNITYSDK_OFFSET(0xC203610)
#define CLASS_3_22F38E8E70E2CACF_METHOD_3_7E361E90E40EE74F_OFFSET UNITYSDK_OFFSET(0xC202440)
#define CLASS_3_22F38E8E70E2CACF_METHOD_3_92B3EB2AF3E0EE17_OFFSET UNITYSDK_OFFSET(0xC203970)
#define CLASS_3_22F38E8E70E2CACF_METHOD_3_C8E0FC6555E62AED_OFFSET UNITYSDK_OFFSET(0xC202A40)
#define CLASS_3_22F38E8E70E2CACF_METHOD_3_DF5CE1528854494C_OFFSET UNITYSDK_OFFSET(0xC2028A0)
#define CLASS_3_22F38E8E70E2CACF_METHOD_3_FEDF26A2EDE7A85C_OFFSET UNITYSDK_OFFSET(0xC202590)
#define CLASS_3_22F38E8E70E2CACF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC202360)
#define CLASS_3_22F38E8E70E2CACF__CTOR_OFFSET UNITYSDK_OFFSET(0xC202330)

inline static constexpr unsigned int Class_3_22F38E8E70E2CACF_TypeDefinitionIndex = 49063;

class Class_3_22F38E8E70E2CACF : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvPassByValueClientOnly*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvPassByValueClientOnly* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvPassByValueClientOnly*))((::PBYTE)hIl2Cpp + CLASS_3_22F38E8E70E2CACF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_22F38E8E70E2CACF_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Object* Method_3_228BD3246DD480F3(::System::String* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_22F38E8E70E2CACF_METHOD_3_228BD3246DD480F3_OFFSET))(this, a1);
	}

	::System::Object* Method_3_DF5CE1528854494C(::System::String* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_22F38E8E70E2CACF_METHOD_3_DF5CE1528854494C_OFFSET))(this, a1);
	}

	::System::Object* Method_3_C8E0FC6555E62AED(::System::String* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_22F38E8E70E2CACF_METHOD_3_C8E0FC6555E62AED_OFFSET))(this, a1);
	}

	::System::Object* Method_3_57218037E49F4670(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Object*(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_22F38E8E70E2CACF_METHOD_3_57218037E49F4670_OFFSET))(this, a1, a2);
	}

	::System::Object* Method_3_7E361E90E40EE74F(::System::String* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_22F38E8E70E2CACF_METHOD_3_7E361E90E40EE74F_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_1CCC16D1E4B886AF(::System::String* a1, ::System::Object* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_22F38E8E70E2CACF_METHOD_3_1CCC16D1E4B886AF_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_747811351AF4777E(::System::String* a1, ::System::Object* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_22F38E8E70E2CACF_METHOD_3_747811351AF4777E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_92B3EB2AF3E0EE17(::System::String* a1, ::System::UInt32 a2, ::System::Object* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_22F38E8E70E2CACF_METHOD_3_92B3EB2AF3E0EE17_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_FEDF26A2EDE7A85C(::System::String* a1, ::System::Object* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_22F38E8E70E2CACF_METHOD_3_FEDF26A2EDE7A85C_OFFSET))(this, a1, a2);
	}
};
