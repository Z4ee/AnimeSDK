#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C8EC2537CFD0A41F;
namespace RPG::Client { class PamChatData; }
namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_93B622FDBEA47D71_METHOD_1_292C4951E7AAAF78_OFFSET UNITYSDK_OFFSET(0x1620E200)
#define CLASS_1_93B622FDBEA47D71_METHOD_1_6B24461BC994AC0B_OFFSET UNITYSDK_OFFSET(0x1620DE40)
#define CLASS_1_93B622FDBEA47D71_METHOD_1_C1E61977AB37D2AF_OFFSET UNITYSDK_OFFSET(0x1620E040)
#define CLASS_1_93B622FDBEA47D71__CTOR_OFFSET UNITYSDK_OFFSET(0x1620DE30)

inline static constexpr unsigned int Class_1_93B622FDBEA47D71_TypeDefinitionIndex = 60492;

class Class_1_93B622FDBEA47D71 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93B622FDBEA47D71__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6B24461BC994AC0B(::RPG::Client::PamChatData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PamChatData*))((::PBYTE)hIl2Cpp + CLASS_1_93B622FDBEA47D71_METHOD_1_6B24461BC994AC0B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_292C4951E7AAAF78(::RPG::Client::PamChatData* a1, ::System::UInt32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PamChatData*, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_93B622FDBEA47D71_METHOD_1_292C4951E7AAAF78_OFFSET))(this, a1, a2);
	}

	::Class_1_C8EC2537CFD0A41F* Method_1_C1E61977AB37D2AF(::RPG::Client::PamChatData* a1, ::System::Predicate_1<::Class_1_C8EC2537CFD0A41F*>* a2)
	{
		return ((::Class_1_C8EC2537CFD0A41F*(*)(::PVOID, ::RPG::Client::PamChatData*, ::System::Predicate_1<::Class_1_C8EC2537CFD0A41F*>*))((::PBYTE)hIl2Cpp + CLASS_1_93B622FDBEA47D71_METHOD_1_C1E61977AB37D2AF_OFFSET))(this, a1, a2);
	}
};
