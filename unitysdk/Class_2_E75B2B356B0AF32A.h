#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCardCasterSource.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_545F497870FB4A84;
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define CLASS_2_E75B2B356B0AF32A_METHOD_2_CFFE4FCD4DD6DA86_OFFSET UNITYSDK_OFFSET(0x1CF12630)
#define CLASS_2_E75B2B356B0AF32A__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF12A50)

inline static constexpr unsigned int Class_2_E75B2B356B0AF32A_TypeDefinitionIndex = 17941;

class Class_2_E75B2B356B0AF32A : public ::RPG::GameCore::JsonConfig
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* IHGPLICHDLA; // 0x10
	::System::String* MBLKGJMPGKC; // 0x18
	::Class_2_545F497870FB4A84* FIENHNJBCBH; // 0x20
	::Class_2_545F497870FB4A84* DPHAELOEHBM; // 0x28
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* MFHALOHAMNO; // 0x30
	::Class_2_545F497870FB4A84* PNMCPEEAOMK; // 0x38
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* BDDGJOHPLFB; // 0x40
	::System::String* DJGEFBEJKHL; // 0x48
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* FCGKIDGCMEN; // 0x50
	::Class_2_545F497870FB4A84* CIDPKCICEBG; // 0x58
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* KNFAIEMEFAI; // 0x60
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* GFDOFDMBDAB; // 0x68
	::RPG::GameCore::FateRinCardCasterSource JHBCCLOFBEN; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E75B2B356B0AF32A__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_CFFE4FCD4DD6DA86(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_E75B2B356B0AF32A*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_E75B2B356B0AF32A*&))((::PBYTE)hIl2Cpp + CLASS_2_E75B2B356B0AF32A_METHOD_2_CFFE4FCD4DD6DA86_OFFSET))(a1, a2);
	}
};
