#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/ElationEchoPointChangeDataProperty.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class Object; }
namespace System { class String; }

#define CLASS_4_ACC39E9B6D0DC863_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1C88C6D0)
#define CLASS_4_ACC39E9B6D0DC863_METHOD_4_9FB7184D9548FFA8_OFFSET UNITYSDK_OFFSET(0x1C88C4B0)
#define CLASS_4_ACC39E9B6D0DC863_METHOD_4_B9CA7374CC83C96D_OFFSET UNITYSDK_OFFSET(0x1C88C4F0)
#define CLASS_4_ACC39E9B6D0DC863__CTOR_OFFSET UNITYSDK_OFFSET(0x1C88C4E0)

inline static constexpr unsigned int Class_4_ACC39E9B6D0DC863_TypeDefinitionIndex = 22530;

class Class_4_ACC39E9B6D0DC863 : public ::RPG::GameCore::SetDynamicValueBase
{
public:
	::System::String* FHLJGDGMMHK; // 0x18
	::RPG::GameCore::DynamicValueContextScope AMEKHLANFKP; // 0x20
	::RPG::GameCore::ElationEchoPointChangeDataProperty FODBMMCKAEN; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_ACC39E9B6D0DC863__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_9FB7184D9548FFA8(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_ACC39E9B6D0DC863*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_ACC39E9B6D0DC863*&))((::PBYTE)hIl2Cpp + CLASS_4_ACC39E9B6D0DC863_METHOD_4_9FB7184D9548FFA8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_B9CA7374CC83C96D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_ACC39E9B6D0DC863* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_ACC39E9B6D0DC863*))((::PBYTE)hIl2Cpp + CLASS_4_ACC39E9B6D0DC863_METHOD_4_B9CA7374CC83C96D_OFFSET))(a1, a2);
	}

	::System::Object* GetDynamicKey()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_ACC39E9B6D0DC863_GETDYNAMICKEY_OFFSET))(this);
	}
};
