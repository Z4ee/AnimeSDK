#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_39F941EB755EB26D_Class_1_6FFEE2E417AAADB3;
namespace RPG::GameCore { class TextJoinConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_39F941EB755EB26D_METHOD_1_07911C9E03213A58_OFFSET UNITYSDK_OFFSET(0x172BE2B0)
#define CLASS_1_39F941EB755EB26D_METHOD_1_A4B7290BDA4364FA_OFFSET UNITYSDK_OFFSET(0x172BE540)
#define CLASS_1_39F941EB755EB26D__CTOR_OFFSET UNITYSDK_OFFSET(0x172BE2A0)

inline static constexpr unsigned int Class_1_39F941EB755EB26D_TypeDefinitionIndex = 74283;

class Class_1_39F941EB755EB26D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_39F941EB755EB26D_Class_1_6FFEE2E417AAADB3*>* GCIKKMGIPIO; // 0x10

	::System::Void _ctor(::RPG::GameCore::TextJoinConfigRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TextJoinConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_39F941EB755EB26D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_07911C9E03213A58(::RPG::GameCore::TextJoinConfigRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TextJoinConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_39F941EB755EB26D_METHOD_1_07911C9E03213A58_OFFSET))(this, a1);
	}

	::System::String* Method_1_A4B7290BDA4364FA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_39F941EB755EB26D_METHOD_1_A4B7290BDA4364FA_OFFSET))(this);
	}
};
