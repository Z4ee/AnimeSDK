#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChessDirection.h"
#include "unitysdk/System/Object.h"

class Class_1_2D33D4E16DA6E537;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C863D1259822C107_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10C5AFF0)
#define CLASS_1_C863D1259822C107_METHOD_1_0CF628B0CBD5544B_OFFSET UNITYSDK_OFFSET(0x10C5B350)
#define CLASS_1_C863D1259822C107_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x10C5B290)
#define CLASS_1_C863D1259822C107_METHOD_1_FF63E816B4D956CD_OFFSET UNITYSDK_OFFSET(0x10C5B1A0)
#define CLASS_1_C863D1259822C107__CTOR_OFFSET UNITYSDK_OFFSET(0x10C5AF80)

inline static constexpr unsigned int Class_1_C863D1259822C107_TypeDefinitionIndex = 64008;

class Class_1_C863D1259822C107 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_2D33D4E16DA6E537*>*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_2D33D4E16DA6E537*>* Field_1_4; // 0x18
	::System::Int32 Field_1_1; // 0x20
	::System::Int32 Field_1_3; // 0x24
	::System::Int32 Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C863D1259822C107__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C863D1259822C107_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_FF63E816B4D956CD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C863D1259822C107_METHOD_1_FF63E816B4D956CD_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C863D1259822C107_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_0CF628B0CBD5544B(::System::Int32 a1, ::System::Int32 a2, ::RPG::Client::Prop::ChessDirection a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::RPG::Client::Prop::ChessDirection, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C863D1259822C107_METHOD_1_0CF628B0CBD5544B_OFFSET))(this, a1, a2, a3, a4);
	}
};
