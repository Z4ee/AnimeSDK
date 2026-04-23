#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"

class Class_0_16E4307DCC419505_382;
class Class_1_6EBCF65D89206A80;
namespace RPG::Client::Prop { class TimeRewindParterrePuzzleBoard_Class_1_57F915E910E94985; }
namespace RPG::Client::Prop { class TimeRewindParterrePuzzleConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Text { class StringBuilder; }

#define RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLEBOARD_CHECKPARTERRECANUSE_OFFSET UNITYSDK_OFFSET(0xAEF0EF0)
#define RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAEF1030)
#define RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xAEEFC10)
#define RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLEBOARD_METHOD_6_A176EE8F7EFAAB1D_OFFSET UNITYSDK_OFFSET(0xAEF1670)
#define RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLEBOARD_METHOD_6_B66FAADA389EB5F1_OFFSET UNITYSDK_OFFSET(0xAEF15E0)
#define RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLEBOARD_METHOD_6_CC03B00D7D862660_OFFSET UNITYSDK_OFFSET(0xAEF1470)
#define RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLEBOARD_METHOD_6_CC99BBFAC9417CA7_OFFSET UNITYSDK_OFFSET(0xAEF0980)
#define RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLEBOARD_METHOD_6_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0xAEF1900)
#define RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLEBOARD_SETPARTERREUSED_OFFSET UNITYSDK_OFFSET(0xAEF0D60)
#define RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLEBOARD__CCTOR_OFFSET UNITYSDK_OFFSET(0xAEF1D20)
#define RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xAEF1B20)
#define RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAEF1D90)
#define RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xAEF1D80)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int TimeRewindParterrePuzzleBoard_TypeDefinitionIndex = 72404;

	class TimeRewindParterrePuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		static ::System::Int32* StaticGet_PlatformGrowAnimHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TimeRewindParterrePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x4640);
		}
		::Il2CppArray<::RPG::Client::Prop::TimeRewindParterrePuzzleConfig*>* Config; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::Prop::TimeRewindParterrePuzzleBoard_Class_1_57F915E910E94985*>* Field_6_2; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_6EBCF65D89206A80*>* Field_6_3; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_6_4; // 0x60
		::System::Text::StringBuilder* Field_6_5; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLEBOARD__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLEBOARD__CCTOR_OFFSET))();
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetParterreUsed(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLEBOARD_SETPARTERREUSED_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean CheckParterreCanUse(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLEBOARD_CHECKPARTERRECANUSE_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Void Method_6_CC03B00D7D862660(::Class_0_16E4307DCC419505_382* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLEBOARD_METHOD_6_CC03B00D7D862660_OFFSET))(this, a1);
		}

		::System::Void Method_6_A176EE8F7EFAAB1D(::Class_0_16E4307DCC419505_382* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLEBOARD_METHOD_6_A176EE8F7EFAAB1D_OFFSET))(this, a1);
		}

		::System::Void Method_6_B66FAADA389EB5F1(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLEBOARD_METHOD_6_B66FAADA389EB5F1_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_CC99BBFAC9417CA7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLEBOARD_METHOD_6_CC99BBFAC9417CA7_OFFSET))(this);
		}

		::System::Void Method_6_DD784213055292FB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLEBOARD_METHOD_6_DD784213055292FB_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_InitPuzzle(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::TaskContext* P1, ::RPG::GameCore::PropInitPuzzle* P2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
