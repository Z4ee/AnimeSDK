#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_ABC67D4EFBF3BD9A_1.h"
#include "unitysdk/Struct_2_DF90B2BD73749811_1.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_76D50EEEB128A93C_METHOD_1_BB0D87FE02624FC0_OFFSET UNITYSDK_OFFSET(0x163EBA70)
#define CLASS_1_76D50EEEB128A93C_METHOD_1_CF780FC3D0CB1833_OFFSET UNITYSDK_OFFSET(0x163EBB70)
#define CLASS_1_76D50EEEB128A93C__CCTOR_OFFSET UNITYSDK_OFFSET(0x163EBD20)
#define CLASS_1_76D50EEEB128A93C__CTOR_OFFSET UNITYSDK_OFFSET(0x163EBC70)

inline static constexpr unsigned int Class_1_76D50EEEB128A93C_TypeDefinitionIndex = 54649;

class Class_1_76D50EEEB128A93C : public ::System::Object
{
public:
	static ::Class_1_76D50EEEB128A93C** StaticGet_JNKBIGPJDNK()
	{
		return (::Class_1_76D50EEEB128A93C**)Il2CppClass::FromTypeDefinitionIndex(Class_1_76D50EEEB128A93C_TypeDefinitionIndex)->GetStaticField(0x3FF00);
	}
	::System::Collections::Generic::List_1<::Struct_2_ABC67D4EFBF3BD9A_1>* FDHBDIEIGKF; // 0x10
	::System::Collections::Generic::List_1<::Struct_2_DF90B2BD73749811_1>* CMHCFOMDBGM; // 0x18
	::System::Nullable_1<::System::Int32> EAIBNKPIJBK; // 0x20
	::System::Boolean PCDBKOKPOPG; // 0x28
	::System::Boolean ICMOLOJEKDF; // 0x29

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76D50EEEB128A93C__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_76D50EEEB128A93C__CCTOR_OFFSET))();
	}

	::System::Void Method_1_BB0D87FE02624FC0(::Class_1_76D50EEEB128A93C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_76D50EEEB128A93C*))((::PBYTE)hIl2Cpp + CLASS_1_76D50EEEB128A93C_METHOD_1_BB0D87FE02624FC0_OFFSET))(this, a1);
	}

	::Class_1_76D50EEEB128A93C* Method_1_CF780FC3D0CB1833()
	{
		return ((::Class_1_76D50EEEB128A93C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76D50EEEB128A93C_METHOD_1_CF780FC3D0CB1833_OFFSET))(this);
	}
};
