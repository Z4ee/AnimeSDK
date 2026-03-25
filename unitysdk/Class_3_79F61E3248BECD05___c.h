#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_591DD46947F040CB.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T1, typename T2> class Converter_2; }

#define CLASS_3_79F61E3248BECD05___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9C48790)
#define CLASS_3_79F61E3248BECD05___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9C487C0)
#define CLASS_3_79F61E3248BECD05___C___ONTASKBEGINIMPL_B__17_0_OFFSET UNITYSDK_OFFSET(0x9C487D0)

inline static constexpr unsigned int Class_3_79F61E3248BECD05___c_TypeDefinitionIndex = 46708;

class Class_3_79F61E3248BECD05___c : public ::System::Object
{
public:
	static ::Class_3_79F61E3248BECD05___c** StaticGet___9()
	{
		return (::Class_3_79F61E3248BECD05___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_79F61E3248BECD05___c_TypeDefinitionIndex)->GetStaticField(0x46B40);
	}
	static ::System::Converter_2<::RPG::GameCore::GameEntity*, ::Struct_2_591DD46947F040CB>** StaticGet___9__17_0()
	{
		return (::System::Converter_2<::RPG::GameCore::GameEntity*, ::Struct_2_591DD46947F040CB>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_79F61E3248BECD05___c_TypeDefinitionIndex)->GetStaticField(0x46B48);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_79F61E3248BECD05___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_79F61E3248BECD05___C__CTOR_OFFSET))(this);
	}

	::Struct_2_591DD46947F040CB __OnTaskBeginImpl_b__17_0(::RPG::GameCore::GameEntity* entity)
	{
		return ((::Struct_2_591DD46947F040CB(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_79F61E3248BECD05___C___ONTASKBEGINIMPL_B__17_0_OFFSET))(this, entity);
	}
};
