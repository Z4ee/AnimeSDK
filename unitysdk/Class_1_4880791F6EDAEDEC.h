#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PetMarbleLevelMode.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_4880791F6EDAEDEC_METHOD_1_81F3FEDEB8077FC5_OFFSET UNITYSDK_OFFSET(0x1CCEBF40)
#define CLASS_1_4880791F6EDAEDEC__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCEC110)

inline static constexpr unsigned int Class_1_4880791F6EDAEDEC_TypeDefinitionIndex = 14424;

class Class_1_4880791F6EDAEDEC : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* JFKCEOGCOOO; // 0x10
	::RPG::GameCore::PetMarbleLevelMode HKEACDBJCOD; // 0x18
	::System::UInt32 OCFMCLAGNFM; // 0x1C
	::System::UInt32 PHFMCACHFIJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4880791F6EDAEDEC__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_81F3FEDEB8077FC5(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_4880791F6EDAEDEC*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_4880791F6EDAEDEC*&))((::PBYTE)hIl2Cpp + CLASS_1_4880791F6EDAEDEC_METHOD_1_81F3FEDEB8077FC5_OFFSET))(a1, a2);
	}
};
