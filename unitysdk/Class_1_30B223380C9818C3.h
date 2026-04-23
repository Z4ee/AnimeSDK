#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MainMissionData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_30B223380C9818C3_METHOD_1_6B2663F8FDF8C102_OFFSET UNITYSDK_OFFSET(0x12504530)
#define CLASS_1_30B223380C9818C3_METHOD_1_EBFF0A2A1B1E8E83_OFFSET UNITYSDK_OFFSET(0x125048C0)
#define CLASS_1_30B223380C9818C3__CTOR_OFFSET UNITYSDK_OFFSET(0x12504AC0)

inline static constexpr unsigned int Class_1_30B223380C9818C3_TypeDefinitionIndex = 60933;

class Class_1_30B223380C9818C3 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30B223380C9818C3__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_6B2663F8FDF8C102(::RPG::Client::MainMissionData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + CLASS_1_30B223380C9818C3_METHOD_1_6B2663F8FDF8C102_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* Method_1_EBFF0A2A1B1E8E83(::RPG::Client::MainMissionData* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + CLASS_1_30B223380C9818C3_METHOD_1_EBFF0A2A1B1E8E83_OFFSET))(this, a1);
	}
};
