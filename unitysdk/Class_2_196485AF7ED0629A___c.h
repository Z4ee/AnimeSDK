#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_57C422EDEAAA7766.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_196485AF7ED0629A___C_METHOD_1_4458DC56A49A73B1_OFFSET UNITYSDK_OFFSET(0x16B00830)
#define CLASS_2_196485AF7ED0629A___C_METHOD_1_7B5257D31875648A_OFFSET UNITYSDK_OFFSET(0x16B00820)
#define CLASS_2_196485AF7ED0629A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16B007D0)
#define CLASS_2_196485AF7ED0629A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16B00810)

inline static constexpr unsigned int Class_2_196485AF7ED0629A___c_TypeDefinitionIndex = 65964;

class Class_2_196485AF7ED0629A___c : public ::System::Object
{
public:
	static ::System::Func_2<::Struct_2_57C422EDEAAA7766, ::System::UInt32>** StaticGet___9__37_0()
	{
		return (::System::Func_2<::Struct_2_57C422EDEAAA7766, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_196485AF7ED0629A___c_TypeDefinitionIndex)->GetStaticField(0x43930);
	}
	static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__37_1()
	{
		return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_196485AF7ED0629A___c_TypeDefinitionIndex)->GetStaticField(0x43938);
	}
	static ::Class_2_196485AF7ED0629A___c** StaticGet___9()
	{
		return (::Class_2_196485AF7ED0629A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_196485AF7ED0629A___c_TypeDefinitionIndex)->GetStaticField(0x43940);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_196485AF7ED0629A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_196485AF7ED0629A___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_7B5257D31875648A(::Struct_2_57C422EDEAAA7766 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::Struct_2_57C422EDEAAA7766))((::PBYTE)hIl2Cpp + CLASS_2_196485AF7ED0629A___C_METHOD_1_7B5257D31875648A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4458DC56A49A73B1(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_196485AF7ED0629A___C_METHOD_1_4458DC56A49A73B1_OFFSET))(this, a1);
	}
};
