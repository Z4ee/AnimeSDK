#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_28AFB3F5ABAFDF52_StencilPriorit.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_28AFB3F5ABAFDF52_METHOD_1_0F3C45C1AE3545DA_OFFSET UNITYSDK_OFFSET(0x9224F50)
#define CLASS_1_28AFB3F5ABAFDF52_METHOD_1_57B951925E136943_OFFSET UNITYSDK_OFFSET(0x9225310)
#define CLASS_1_28AFB3F5ABAFDF52_METHOD_1_87CF8540686A9C2E_OFFSET UNITYSDK_OFFSET(0x9224E10)
#define CLASS_1_28AFB3F5ABAFDF52_METHOD_1_883CA0903045EC42_OFFSET UNITYSDK_OFFSET(0x92255E0)
#define CLASS_1_28AFB3F5ABAFDF52_METHOD_1_8EF5D7F74398BAC4_OFFSET UNITYSDK_OFFSET(0x9225270)
#define CLASS_1_28AFB3F5ABAFDF52_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x9225800)
#define CLASS_1_28AFB3F5ABAFDF52_METHOD_1_97792D8FEDF9BD62_OFFSET UNITYSDK_OFFSET(0x9224CE0)
#define CLASS_1_28AFB3F5ABAFDF52_METHOD_1_9E89E938C76D39CB_OFFSET UNITYSDK_OFFSET(0x9224FF0)
#define CLASS_1_28AFB3F5ABAFDF52_METHOD_1_C4E8899A1D27D013_OFFSET UNITYSDK_OFFSET(0x9225660)
#define CLASS_1_28AFB3F5ABAFDF52_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x9225730)
#define CLASS_1_28AFB3F5ABAFDF52_METHOD_1_D4173B09B9D3F573_OFFSET UNITYSDK_OFFSET(0x9224EB0)
#define CLASS_1_28AFB3F5ABAFDF52__CCTOR_OFFSET UNITYSDK_OFFSET(0x92258F0)
#define CLASS_1_28AFB3F5ABAFDF52__CTOR_OFFSET UNITYSDK_OFFSET(0x9225870)

inline static constexpr unsigned int Class_1_28AFB3F5ABAFDF52_TypeDefinitionIndex = 64713;

class Class_1_28AFB3F5ABAFDF52 : public ::System::Object
{
public:
	static ::Class_1_28AFB3F5ABAFDF52** StaticGet_Field_1_0()
	{
		return (::Class_1_28AFB3F5ABAFDF52**)Il2CppClass::FromTypeDefinitionIndex(Class_1_28AFB3F5ABAFDF52_TypeDefinitionIndex)->GetStaticField(0x699F0);
	}
	// static const ::System::Int32 Field_1_1 = 0x11; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x21; // 0x0
	::Il2CppArray<::System::UInt32>* Field_1_3; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_6; // 0x18
	::Il2CppArray<::System::Int32>* Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28AFB3F5ABAFDF52__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_28AFB3F5ABAFDF52__CCTOR_OFFSET))();
	}

	static ::Class_1_28AFB3F5ABAFDF52_StencilPriorit Method_1_97792D8FEDF9BD62(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_28AFB3F5ABAFDF52_StencilPriorit(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_28AFB3F5ABAFDF52_METHOD_1_97792D8FEDF9BD62_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_87CF8540686A9C2E(::System::UInt32 a1, ::System::Int32 a2, ::System::UInt32& a3)
	{
		return ((::System::Int32(*)(::System::UInt32, ::System::Int32, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_28AFB3F5ABAFDF52_METHOD_1_87CF8540686A9C2E_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_1_0F3C45C1AE3545DA(::System::UInt32 a1, ::System::Int32 a2, ::System::UInt32& a3)
	{
		return ((::System::Int32(*)(::System::UInt32, ::System::Int32, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_28AFB3F5ABAFDF52_METHOD_1_0F3C45C1AE3545DA_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_8EF5D7F74398BAC4(::System::UInt32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_28AFB3F5ABAFDF52_METHOD_1_8EF5D7F74398BAC4_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_1_883CA0903045EC42(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_28AFB3F5ABAFDF52_METHOD_1_883CA0903045EC42_OFFSET))(a1);
	}

	static ::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_28AFB3F5ABAFDF52_METHOD_1_D0BD1377F2594D33_OFFSET))();
	}

	::System::Int32 Method_1_D4173B09B9D3F573(::System::UInt32 a1, ::System::Int32 a2, ::System::UInt32& a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_28AFB3F5ABAFDF52_METHOD_1_D4173B09B9D3F573_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_9E89E938C76D39CB(::System::UInt32 a1, ::System::Int32 a2, ::System::UInt32& a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_28AFB3F5ABAFDF52_METHOD_1_9E89E938C76D39CB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_57B951925E136943(::System::UInt32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_28AFB3F5ABAFDF52_METHOD_1_57B951925E136943_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_C4E8899A1D27D013(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_28AFB3F5ABAFDF52_METHOD_1_C4E8899A1D27D013_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28AFB3F5ABAFDF52_METHOD_1_9681042564541CD6_OFFSET))(this);
	}
};
