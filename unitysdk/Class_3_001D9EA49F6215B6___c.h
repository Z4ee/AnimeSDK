#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_56DCA1B58073717B;
class Class_3_001D9EA49F6215B6;
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_3_001D9EA49F6215B6___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1762BF90)
#define CLASS_3_001D9EA49F6215B6___C__CREATECAMERAVIEW_B__73_0_OFFSET UNITYSDK_OFFSET(0x1762BFD0)
#define CLASS_3_001D9EA49F6215B6___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1762BFC0)
#define CLASS_3_001D9EA49F6215B6___C__REPORTGAMEEND_B__256_0_OFFSET UNITYSDK_OFFSET(0x1762BFF0)

inline static constexpr unsigned int Class_3_001D9EA49F6215B6___c_TypeDefinitionIndex = 72774;

class Class_3_001D9EA49F6215B6___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::GameCore::LittleGameEntityConfig*, ::System::String*>** StaticGet___9__256_0()
	{
		return (::System::Func_2<::RPG::GameCore::LittleGameEntityConfig*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_001D9EA49F6215B6___c_TypeDefinitionIndex)->GetStaticField(0x578D0);
	}
	static ::Class_3_001D9EA49F6215B6___c** StaticGet___9()
	{
		return (::Class_3_001D9EA49F6215B6___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_001D9EA49F6215B6___c_TypeDefinitionIndex)->GetStaticField(0x578D8);
	}
	static ::System::Action_2<::Class_3_001D9EA49F6215B6*, ::Class_2_56DCA1B58073717B*>** StaticGet___9__73_0()
	{
		return (::System::Action_2<::Class_3_001D9EA49F6215B6*, ::Class_2_56DCA1B58073717B*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_001D9EA49F6215B6___c_TypeDefinitionIndex)->GetStaticField(0x578E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_001D9EA49F6215B6___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_001D9EA49F6215B6___C__CTOR_OFFSET))(this);
	}

	::System::Void _CreateCameraView_b__73_0(::Class_3_001D9EA49F6215B6* a1, ::Class_2_56DCA1B58073717B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_001D9EA49F6215B6*, ::Class_2_56DCA1B58073717B*))((::PBYTE)hIl2Cpp + CLASS_3_001D9EA49F6215B6___C__CREATECAMERAVIEW_B__73_0_OFFSET))(this, a1, a2);
	}

	::System::String* _ReportGameEnd_b__256_0(::RPG::GameCore::LittleGameEntityConfig* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_3_001D9EA49F6215B6___C__REPORTGAMEEND_B__256_0_OFFSET))(this, a1);
	}
};
