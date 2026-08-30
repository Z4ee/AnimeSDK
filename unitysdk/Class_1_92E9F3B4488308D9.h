#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_855;
namespace RPG::Client { class GridFightTrait; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_92E9F3B4488308D9_METHOD_1_5236A16DF83B87FA_OFFSET UNITYSDK_OFFSET(0x17A7D3B0)
#define CLASS_1_92E9F3B4488308D9_METHOD_1_95A0E0610BE8317B_OFFSET UNITYSDK_OFFSET(0x17A7DA20)
#define CLASS_1_92E9F3B4488308D9__CTOR_OFFSET UNITYSDK_OFFSET(0x17A7D3A0)

inline static constexpr unsigned int Class_1_92E9F3B4488308D9_TypeDefinitionIndex = 65518;

class Class_1_92E9F3B4488308D9 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_855* BABBJILOOAL; // 0x10
	::System::UInt32 FKFJBEKKKNI; // 0x18

	::System::Void _ctor(::System::UInt32 a1, ::Class_0_16E4307DCC419505_855* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_0_16E4307DCC419505_855*))((::PBYTE)hIl2Cpp + CLASS_1_92E9F3B4488308D9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>* Method_1_5236A16DF83B87FA()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92E9F3B4488308D9_METHOD_1_5236A16DF83B87FA_OFFSET))(this);
	}

	::RPG::Client::GridFightTrait* Method_1_95A0E0610BE8317B(::System::UInt32 a1)
	{
		return ((::RPG::Client::GridFightTrait*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_92E9F3B4488308D9_METHOD_1_95A0E0610BE8317B_OFFSET))(this, a1);
	}
};
