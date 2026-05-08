#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_1_9518D8B9952B14FF;
class Class_2_208CC9941471731A_131;
namespace Share { class CRandom; }
namespace System { class String; }

#define CLASS_1_16408A25AD96E4C2_METHOD_1_4D5751D8EC838DF2_OFFSET UNITYSDK_OFFSET(0x13A9C370)
#define CLASS_1_16408A25AD96E4C2_METHOD_1_A207F7A48DE56E71_OFFSET UNITYSDK_OFFSET(0x13A9C050)
#define CLASS_1_16408A25AD96E4C2__CTOR_OFFSET UNITYSDK_OFFSET(0x13A9C040)

inline static constexpr unsigned int Class_1_16408A25AD96E4C2_TypeDefinitionIndex = 11449;

class Class_1_16408A25AD96E4C2 : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_9518D8B9952B14FF*>* Field_1_0; // 0x10

	::System::Void _ctor(::Il2CppArray<::Class_1_9518D8B9952B14FF*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_9518D8B9952B14FF*>*))((::PBYTE)hIl2Cpp + CLASS_1_16408A25AD96E4C2__CTOR_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::Class_2_208CC9941471731A_131*, ::System::Int32>>* Method_1_A207F7A48DE56E71(::Share::CRandom* a1)
	{
		return ((::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::Class_2_208CC9941471731A_131*, ::System::Int32>>*(*)(::PVOID, ::Share::CRandom*))((::PBYTE)hIl2Cpp + CLASS_1_16408A25AD96E4C2_METHOD_1_A207F7A48DE56E71_OFFSET))(this, a1);
	}

	static ::Class_1_16408A25AD96E4C2* Method_1_4D5751D8EC838DF2(::System::String* a1)
	{
		return ((::Class_1_16408A25AD96E4C2*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_16408A25AD96E4C2_METHOD_1_4D5751D8EC838DF2_OFFSET))(a1);
	}
};
