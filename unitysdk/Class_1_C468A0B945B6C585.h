#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_360;
class Class_0_16E4307DCC419505_723;
class Class_1_61097837E1D530F4;
namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_C468A0B945B6C585_METHOD_1_F66FF001485B4931_OFFSET UNITYSDK_OFFSET(0x13641710)

inline static constexpr unsigned int Class_1_C468A0B945B6C585_TypeDefinitionIndex = 58785;

class Class_1_C468A0B945B6C585 : public ::System::Object
{
public:
	static ::Class_0_16E4307DCC419505_360* Method_1_F66FF001485B4931(::Class_0_16E4307DCC419505_360* a1, ::RPG::AvatarSystem::IAvatar* a2, ::Class_1_61097837E1D530F4* a3, ::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_723*>* a4)
	{
		return ((::Class_0_16E4307DCC419505_360*(*)(::Class_0_16E4307DCC419505_360*, ::RPG::AvatarSystem::IAvatar*, ::Class_1_61097837E1D530F4*, ::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_723*>*))((::PBYTE)hIl2Cpp + CLASS_1_C468A0B945B6C585_METHOD_1_F66FF001485B4931_OFFSET))(a1, a2, a3, a4);
	}
};
