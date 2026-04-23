#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_722;
namespace RPG::Client { class GridFightTrait; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_92E9F3B4488308D9_METHOD_1_6539052A31A6A145_OFFSET UNITYSDK_OFFSET(0x128A8400)
#define CLASS_1_92E9F3B4488308D9_METHOD_1_95A0E0610BE8317B_OFFSET UNITYSDK_OFFSET(0x128A8870)
#define CLASS_1_92E9F3B4488308D9__CTOR_OFFSET UNITYSDK_OFFSET(0x128A83F0)

inline static constexpr unsigned int Class_1_92E9F3B4488308D9_TypeDefinitionIndex = 60257;

class Class_1_92E9F3B4488308D9 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_722* Field_1_1; // 0x10
	::System::UInt32 Field_1_0; // 0x18

	::System::Void _ctor(::System::UInt32 a1, ::Class_0_16E4307DCC419505_722* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_0_16E4307DCC419505_722*))((::PBYTE)hIl2Cpp + CLASS_1_92E9F3B4488308D9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>* Method_1_6539052A31A6A145()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92E9F3B4488308D9_METHOD_1_6539052A31A6A145_OFFSET))(this);
	}

	::RPG::Client::GridFightTrait* Method_1_95A0E0610BE8317B(::System::UInt32 a1)
	{
		return ((::RPG::Client::GridFightTrait*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_92E9F3B4488308D9_METHOD_1_95A0E0610BE8317B_OFFSET))(this, a1);
	}
};
