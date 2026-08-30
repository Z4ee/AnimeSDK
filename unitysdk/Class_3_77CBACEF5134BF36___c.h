#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_591DD46947F040CB.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T1, typename T2> class Converter_2; }

#define CLASS_3_77CBACEF5134BF36___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17F8CC00)
#define CLASS_3_77CBACEF5134BF36___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17F8CC30)
#define CLASS_3_77CBACEF5134BF36___C__ONTASKBEGIN_B__2_0_OFFSET UNITYSDK_OFFSET(0x17F8CC40)

inline static constexpr unsigned int Class_3_77CBACEF5134BF36___c_TypeDefinitionIndex = 58887;

class Class_3_77CBACEF5134BF36___c : public ::System::Object
{
public:
	static ::Class_3_77CBACEF5134BF36___c** StaticGet___9()
	{
		return (::Class_3_77CBACEF5134BF36___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_77CBACEF5134BF36___c_TypeDefinitionIndex)->GetStaticField(0x55E00);
	}
	static ::System::Converter_2<::RPG::GameCore::GameEntity*, ::Struct_2_591DD46947F040CB>** StaticGet___9__2_0()
	{
		return (::System::Converter_2<::RPG::GameCore::GameEntity*, ::Struct_2_591DD46947F040CB>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_77CBACEF5134BF36___c_TypeDefinitionIndex)->GetStaticField(0x55E08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_77CBACEF5134BF36___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_77CBACEF5134BF36___C__CTOR_OFFSET))(this);
	}

	::Struct_2_591DD46947F040CB _OnTaskBegin_b__2_0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Struct_2_591DD46947F040CB(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_77CBACEF5134BF36___C__ONTASKBEGIN_B__2_0_OFFSET))(this, a1);
	}
};
