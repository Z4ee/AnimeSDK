#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_E8870133B6BD2893_CLASS_1_DA841934935996B2__CTOR_OFFSET UNITYSDK_OFFSET(0x157740D0)

inline static constexpr unsigned int Class_2_E8870133B6BD2893_Class_1_DA841934935996B2_TypeDefinitionIndex = 73164;

class Class_2_E8870133B6BD2893_Class_1_DA841934935996B2 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* HBLIMNKIPLN; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* PEANIENEKOB; // 0x18
	::System::UInt32 JIDLKIHJLFL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8870133B6BD2893_CLASS_1_DA841934935996B2__CTOR_OFFSET))(this);
	}
};
