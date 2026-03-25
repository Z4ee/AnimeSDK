#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_1958EDD0843A6E37.h"
#include "unitysdk/System/Object.h"

class Class_1_AF47DF2B58369486;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6C80ECD53CBBB61A_METHOD_1_0FAEE31385A1724C_OFFSET UNITYSDK_OFFSET(0x16D8A6B0)
#define CLASS_1_6C80ECD53CBBB61A_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x16D8A940)
#define CLASS_1_6C80ECD53CBBB61A_METHOD_1_18712DB3B1B723E8_OFFSET UNITYSDK_OFFSET(0x16D8A720)
#define CLASS_1_6C80ECD53CBBB61A_METHOD_1_400CA285EF6AFA73_OFFSET UNITYSDK_OFFSET(0x16D8A420)
#define CLASS_1_6C80ECD53CBBB61A_METHOD_1_6CA5EC5968C405B7_OFFSET UNITYSDK_OFFSET(0x16D8A490)
#define CLASS_1_6C80ECD53CBBB61A_METHOD_1_94BE8F0E41BE03DE_OFFSET UNITYSDK_OFFSET(0x16D8A3B0)
#define CLASS_1_6C80ECD53CBBB61A_METHOD_1_9B19887D6EB87BAC_OFFSET UNITYSDK_OFFSET(0x16D8A5B0)
#define CLASS_1_6C80ECD53CBBB61A_METHOD_1_D3A9785620AB0D9A_OFFSET UNITYSDK_OFFSET(0x16D8A2C0)
#define CLASS_1_6C80ECD53CBBB61A__CTOR_OFFSET UNITYSDK_OFFSET(0x16D8A850)

inline static constexpr unsigned int Class_1_6C80ECD53CBBB61A_TypeDefinitionIndex = 9903;

class Class_1_6C80ECD53CBBB61A : public ::System::Object
{
public:
	static ::Class_1_6C80ECD53CBBB61A** StaticGet_Field_1_3()
	{
		return (::Class_1_6C80ECD53CBBB61A**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6C80ECD53CBBB61A_TypeDefinitionIndex)->GetStaticField(0x14CE0);
	}
	::System::Collections::Generic::List_1<::System::Byte>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C80ECD53CBBB61A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D3A9785620AB0D9A(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_6C80ECD53CBBB61A_METHOD_1_D3A9785620AB0D9A_OFFSET))(this, a1);
	}

	::System::Byte Method_1_6CA5EC5968C405B7(::Class_1_AF47DF2B58369486* a1)
	{
		return ((::System::Byte(*)(::PVOID, ::Class_1_AF47DF2B58369486*))((::PBYTE)hIl2Cpp + CLASS_1_6C80ECD53CBBB61A_METHOD_1_6CA5EC5968C405B7_OFFSET))(this, a1);
	}

	::System::Byte Method_1_94BE8F0E41BE03DE(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Byte(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_6C80ECD53CBBB61A_METHOD_1_94BE8F0E41BE03DE_OFFSET))(this, a1);
	}

	::System::Byte Method_1_9B19887D6EB87BAC(::System::String* a1)
	{
		return ((::System::Byte(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6C80ECD53CBBB61A_METHOD_1_9B19887D6EB87BAC_OFFSET))(this, a1);
	}

	::System::Void Method_1_400CA285EF6AFA73(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_6C80ECD53CBBB61A_METHOD_1_400CA285EF6AFA73_OFFSET))(this, a1);
	}

	::Struct_2_1958EDD0843A6E37 Method_1_0FAEE31385A1724C()
	{
		return ((::Struct_2_1958EDD0843A6E37(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C80ECD53CBBB61A_METHOD_1_0FAEE31385A1724C_OFFSET))(this);
	}

	static ::Class_1_6C80ECD53CBBB61A* Method_1_18712DB3B1B723E8()
	{
		return ((::Class_1_6C80ECD53CBBB61A*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6C80ECD53CBBB61A_METHOD_1_18712DB3B1B723E8_OFFSET))();
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C80ECD53CBBB61A_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}
};
