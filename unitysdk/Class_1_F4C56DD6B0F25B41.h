#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_82297B6AFFE49354;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F4C56DD6B0F25B41_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x16730020)
#define CLASS_1_F4C56DD6B0F25B41__CTOR_OFFSET UNITYSDK_OFFSET(0x16730130)

inline static constexpr unsigned int Class_1_F4C56DD6B0F25B41_TypeDefinitionIndex = 28511;

class Class_1_F4C56DD6B0F25B41 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::Class_1_82297B6AFFE49354*>* Field_1_3; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_0; // 0x28
	::System::Int32 Field_1_4; // 0x30
	::System::Single Field_1_5; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4C56DD6B0F25B41__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4C56DD6B0F25B41_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}
};
