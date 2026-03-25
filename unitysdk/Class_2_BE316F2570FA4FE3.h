#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_176.h"

class Class_1_F9FBCC956DFCF137_14;
class Class_1_FD611945730E269E;
namespace RPG::Client::Prop { class ChimeraDuelShopViewEffectBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_BE316F2570FA4FE3_METHOD_2_16E792B668863BDD_OFFSET UNITYSDK_OFFSET(0x10572850)
#define CLASS_2_BE316F2570FA4FE3__CTOR_OFFSET UNITYSDK_OFFSET(0x105728D0)

inline static constexpr unsigned int Class_2_BE316F2570FA4FE3_TypeDefinitionIndex = 63805;

class Class_2_BE316F2570FA4FE3 : public ::Class_1_43BD383C98B4C0C5_176
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimeraDuelShopViewEffectBase*>* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE316F2570FA4FE3__CTOR_OFFSET))(this);
	}

	::Class_1_FD611945730E269E* Method_2_16E792B668863BDD(::Class_1_F9FBCC956DFCF137_14* a1)
	{
		return ((::Class_1_FD611945730E269E*(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_14*))((::PBYTE)hIl2Cpp + CLASS_2_BE316F2570FA4FE3_METHOD_2_16E792B668863BDD_OFFSET))(this, a1);
	}
};
