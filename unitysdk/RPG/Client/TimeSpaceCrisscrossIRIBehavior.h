#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"

class Class_1_2FF4295849ECC7AF;
class Class_1_B044F82CBFAD3D4B;
namespace RPG::Client { class TimeSpaceCrisscrossIRIMonoPlugin; }
namespace RPG::Client::LiteInstancedItem { class ItemPrototype; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define RPG_CLIENT_TIMESPACECRISSCROSSIRIBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0x197A5150)
#define RPG_CLIENT_TIMESPACECRISSCROSSIRIBEHAVIOR_METHOD_3_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x197A61A0)
#define RPG_CLIENT_TIMESPACECRISSCROSSIRIBEHAVIOR_METHOD_3_3BCF0226A6CDC13B_OFFSET UNITYSDK_OFFSET(0x197A5430)
#define RPG_CLIENT_TIMESPACECRISSCROSSIRIBEHAVIOR_METHOD_3_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x197A6250)
#define RPG_CLIENT_TIMESPACECRISSCROSSIRIBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x197A6500)
#define RPG_CLIENT_TIMESPACECRISSCROSSIRIBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x197A6560)
#define RPG_CLIENT_TIMESPACECRISSCROSSIRIBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x197A64A0)
#define RPG_CLIENT_TIMESPACECRISSCROSSIRIBEHAVIOR_METHOD_3_8594010D6A57C9BB_OFFSET UNITYSDK_OFFSET(0x197A63A0)
#define RPG_CLIENT_TIMESPACECRISSCROSSIRIBEHAVIOR_METHOD_3_AA7E3074254D484A_OFFSET UNITYSDK_OFFSET(0x197A51D0)
#define RPG_CLIENT_TIMESPACECRISSCROSSIRIBEHAVIOR_METHOD_3_EA0BA3E4AF50C583_OFFSET UNITYSDK_OFFSET(0x197A3EB0)
#define RPG_CLIENT_TIMESPACECRISSCROSSIRIBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0x197A65C0)
#define RPG_CLIENT_TIMESPACECRISSCROSSIRIBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x197A6650)
#define RPG_CLIENT_TIMESPACECRISSCROSSIRIBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x197A6640)

namespace RPG::Client
{
	inline static constexpr unsigned int TimeSpaceCrisscrossIRIBehavior_TypeDefinitionIndex = 70190;

	class TimeSpaceCrisscrossIRIBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Int32* StaticGet__IRICustomDataID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TimeSpaceCrisscrossIRIBehavior_TypeDefinitionIndex)->GetStaticField(0x12360);
		}
		::UnityEngine::MaterialPropertyBlock* _Mpb; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* _InstancedTSCMats; // 0x40
		::System::Collections::Generic::List_1<::Class_1_2FF4295849ECC7AF*>* _TSCItemInstances; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::LiteInstancedItem::ItemPrototype*>* _TSCItemPrototype; // 0x50
		::Class_1_B044F82CBFAD3D4B* _ItemRenderer; // 0x58
		::System::Boolean _Registed; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSIRIBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSIRIBEHAVIOR__CCTOR_OFFSET))();
		}

		::System::Void Method_3_EA0BA3E4AF50C583()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSIRIBEHAVIOR_METHOD_3_EA0BA3E4AF50C583_OFFSET))(this);
		}

		::System::Void Method_3_AA7E3074254D484A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSIRIBEHAVIOR_METHOD_3_AA7E3074254D484A_OFFSET))(this);
		}

		::System::Void Method_3_3BCF0226A6CDC13B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSIRIBEHAVIOR_METHOD_3_3BCF0226A6CDC13B_OFFSET))(this);
		}

		::System::Void Method_3_2450CFC043E97F54()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSIRIBEHAVIOR_METHOD_3_2450CFC043E97F54_OFFSET))(this);
		}

		::System::Void Method_3_41A074549EF25F63()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSIRIBEHAVIOR_METHOD_3_41A074549EF25F63_OFFSET))(this);
		}

		::System::Void Method_3_8594010D6A57C9BB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSIRIBEHAVIOR_METHOD_3_8594010D6A57C9BB_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSIRIBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSIRIBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSIRIBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSIRIBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::RPG::Client::TimeSpaceCrisscrossIRIMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::TimeSpaceCrisscrossIRIMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSIRIBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}
	};
}
