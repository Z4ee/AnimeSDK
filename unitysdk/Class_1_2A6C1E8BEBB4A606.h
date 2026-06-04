#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_151;
namespace RPG::Client { class GridFightGameSession; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2A6C1E8BEBB4A606_METHOD_1_47FCE72550F759BF_OFFSET UNITYSDK_OFFSET(0x11918690)
#define CLASS_1_2A6C1E8BEBB4A606_METHOD_1_AF5F4E2A5A0E1328_OFFSET UNITYSDK_OFFSET(0x11918A20)
#define CLASS_1_2A6C1E8BEBB4A606__CTOR_OFFSET UNITYSDK_OFFSET(0x11918730)

inline static constexpr unsigned int Class_1_2A6C1E8BEBB4A606_TypeDefinitionIndex = 60626;

class Class_1_2A6C1E8BEBB4A606 : public ::System::Object
{
public:
	static ::Class_1_2A6C1E8BEBB4A606** StaticGet_Field_1_0()
	{
		return (::Class_1_2A6C1E8BEBB4A606**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2A6C1E8BEBB4A606_TypeDefinitionIndex)->GetStaticField(0x19970);
	}
	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_151*>* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A6C1E8BEBB4A606__CTOR_OFFSET))(this);
	}

	static ::Class_1_2A6C1E8BEBB4A606* Method_1_47FCE72550F759BF()
	{
		return ((::Class_1_2A6C1E8BEBB4A606*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2A6C1E8BEBB4A606_METHOD_1_47FCE72550F759BF_OFFSET))();
	}

	::System::Void Method_1_AF5F4E2A5A0E1328(::RPG::Client::GridFightGameSession* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameSession*))((::PBYTE)hIl2Cpp + CLASS_1_2A6C1E8BEBB4A606_METHOD_1_AF5F4E2A5A0E1328_OFFSET))(this, a1);
	}
};
