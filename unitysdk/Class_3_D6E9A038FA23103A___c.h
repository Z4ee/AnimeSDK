#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_0C58AD91B0F4D809;
class Class_3_D6E9A038FA23103A;
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_3_D6E9A038FA23103A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x956B290)
#define CLASS_3_D6E9A038FA23103A___C__CREATECAMERAVIEW_B__46_0_OFFSET UNITYSDK_OFFSET(0x956B2E0)
#define CLASS_3_D6E9A038FA23103A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x956B2D0)
#define CLASS_3_D6E9A038FA23103A___C__REPORTGAMEEND_B__190_0_OFFSET UNITYSDK_OFFSET(0x956B300)

inline static constexpr unsigned int Class_3_D6E9A038FA23103A___c_TypeDefinitionIndex = 70443;

class Class_3_D6E9A038FA23103A___c : public ::System::Object
{
public:
	static ::Class_3_D6E9A038FA23103A___c** StaticGet___9()
	{
		return (::Class_3_D6E9A038FA23103A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D6E9A038FA23103A___c_TypeDefinitionIndex)->GetStaticField(0x5B110);
	}
	static ::System::Action_2<::Class_3_D6E9A038FA23103A*, ::Class_2_0C58AD91B0F4D809*>** StaticGet___9__46_0()
	{
		return (::System::Action_2<::Class_3_D6E9A038FA23103A*, ::Class_2_0C58AD91B0F4D809*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D6E9A038FA23103A___c_TypeDefinitionIndex)->GetStaticField(0x5B118);
	}
	static ::System::Func_2<::RPG::GameCore::LittleGameEntityConfig*, ::System::String*>** StaticGet___9__190_0()
	{
		return (::System::Func_2<::RPG::GameCore::LittleGameEntityConfig*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D6E9A038FA23103A___c_TypeDefinitionIndex)->GetStaticField(0x5B120);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_D6E9A038FA23103A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D6E9A038FA23103A___C__CTOR_OFFSET))(this);
	}

	::System::Void _CreateCameraView_b__46_0(::Class_3_D6E9A038FA23103A* self, ::Class_2_0C58AD91B0F4D809* ent)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D6E9A038FA23103A*, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_3_D6E9A038FA23103A___C__CREATECAMERAVIEW_B__46_0_OFFSET))(this, self, ent);
	}

	::System::String* _ReportGameEnd_b__190_0(::RPG::GameCore::LittleGameEntityConfig* v)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_3_D6E9A038FA23103A___C__REPORTGAMEEND_B__190_0_OFFSET))(this, v);
	}
};
