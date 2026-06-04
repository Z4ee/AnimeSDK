#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_773;
namespace RPG::Client { class GridFightTrait; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_92E9F3B4488308D9_METHOD_1_95990F23E29E1ECA_OFFSET UNITYSDK_OFFSET(0xA676E00)
#define CLASS_1_92E9F3B4488308D9_METHOD_1_95A0E0610BE8317B_OFFSET UNITYSDK_OFFSET(0xA6772F0)
#define CLASS_1_92E9F3B4488308D9__CTOR_OFFSET UNITYSDK_OFFSET(0xA676DF0)

inline static constexpr unsigned int Class_1_92E9F3B4488308D9_TypeDefinitionIndex = 61192;

class Class_1_92E9F3B4488308D9 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_773* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18

	::System::Void _ctor(::System::UInt32 a1, ::Class_0_16E4307DCC419505_773* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_0_16E4307DCC419505_773*))((::PBYTE)hIl2Cpp + CLASS_1_92E9F3B4488308D9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>* Method_1_95990F23E29E1ECA()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92E9F3B4488308D9_METHOD_1_95990F23E29E1ECA_OFFSET))(this);
	}

	::RPG::Client::GridFightTrait* Method_1_95A0E0610BE8317B(::System::UInt32 a1)
	{
		return ((::RPG::Client::GridFightTrait*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_92E9F3B4488308D9_METHOD_1_95A0E0610BE8317B_OFFSET))(this, a1);
	}
};
