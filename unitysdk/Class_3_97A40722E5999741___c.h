#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_591DD46947F040CB.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T1, typename T2> class Converter_2; }

#define CLASS_3_97A40722E5999741___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA9ECC50)
#define CLASS_3_97A40722E5999741___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA9ECC80)
#define CLASS_3_97A40722E5999741___C___ONTASKBEGINIMPL_B__17_0_OFFSET UNITYSDK_OFFSET(0xA9ECC90)

inline static constexpr unsigned int Class_3_97A40722E5999741___c_TypeDefinitionIndex = 54130;

class Class_3_97A40722E5999741___c : public ::System::Object
{
public:
	static ::Class_3_97A40722E5999741___c** StaticGet___9()
	{
		return (::Class_3_97A40722E5999741___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_97A40722E5999741___c_TypeDefinitionIndex)->GetStaticField(0x68750);
	}
	static ::System::Converter_2<::RPG::GameCore::GameEntity*, ::Struct_2_591DD46947F040CB>** StaticGet___9__17_0()
	{
		return (::System::Converter_2<::RPG::GameCore::GameEntity*, ::Struct_2_591DD46947F040CB>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_97A40722E5999741___c_TypeDefinitionIndex)->GetStaticField(0x68758);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741___C__CTOR_OFFSET))(this);
	}

	::Struct_2_591DD46947F040CB __OnTaskBeginImpl_b__17_0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Struct_2_591DD46947F040CB(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741___C___ONTASKBEGINIMPL_B__17_0_OFFSET))(this, a1);
	}
};
