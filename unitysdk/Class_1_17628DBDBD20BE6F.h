#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Collision2DUpdateType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"
#include "unitysdk/RPG/MColor.h"
#include "unitysdk/Struct_2_875B08BB13E31BEE.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_440;
class Class_0_16E4307DCC419505_441;
class Class_1_98133438BFCB56ED;
class Class_1_D30B741E780CB2FD;
class Class_1_E7BD46EB43F1A06F;
namespace RPG::GameCore { class GameWorld; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_17628DBDBD20BE6F_METHOD_1_0F385A3C5FDF01D9_OFFSET UNITYSDK_OFFSET(0x15621620)
#define CLASS_1_17628DBDBD20BE6F_METHOD_1_4628F59881B23161_OFFSET UNITYSDK_OFFSET(0x15621C50)
#define CLASS_1_17628DBDBD20BE6F_METHOD_1_4FB9BE0E17E8AA4E_OFFSET UNITYSDK_OFFSET(0x15621FF0)
#define CLASS_1_17628DBDBD20BE6F_METHOD_1_5587AE4B03E68C58_OFFSET UNITYSDK_OFFSET(0x15623BD0)
#define CLASS_1_17628DBDBD20BE6F_METHOD_1_7267F516B84E2D86_OFFSET UNITYSDK_OFFSET(0x15624330)
#define CLASS_1_17628DBDBD20BE6F_METHOD_1_81483EC470411B74_OFFSET UNITYSDK_OFFSET(0x15621CE0)
#define CLASS_1_17628DBDBD20BE6F_METHOD_1_9803082DC13B9390_OFFSET UNITYSDK_OFFSET(0x15622060)
#define CLASS_1_17628DBDBD20BE6F_METHOD_1_9BAB385F8658C2AD_OFFSET UNITYSDK_OFFSET(0x15622160)
#define CLASS_1_17628DBDBD20BE6F_METHOD_1_9C1A214F97FB8CE1_OFFSET UNITYSDK_OFFSET(0x15621760)
#define CLASS_1_17628DBDBD20BE6F_METHOD_1_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x156220C0)
#define CLASS_1_17628DBDBD20BE6F_METHOD_1_A67D499B6B266137_OFFSET UNITYSDK_OFFSET(0x15623DE0)
#define CLASS_1_17628DBDBD20BE6F_METHOD_1_A8EE4F706DE7DB8F_OFFSET UNITYSDK_OFFSET(0x15623E70)
#define CLASS_1_17628DBDBD20BE6F_METHOD_1_AF338721792188C4_OFFSET UNITYSDK_OFFSET(0x156214E0)
#define CLASS_1_17628DBDBD20BE6F_METHOD_1_C46E6CD6AE9E1B86_OFFSET UNITYSDK_OFFSET(0x15621590)
#define CLASS_1_17628DBDBD20BE6F_METHOD_1_C9AD03BD3B583EEE_OFFSET UNITYSDK_OFFSET(0x15624620)
#define CLASS_1_17628DBDBD20BE6F_METHOD_1_D545E2F706415F81_OFFSET UNITYSDK_OFFSET(0x15622490)
#define CLASS_1_17628DBDBD20BE6F_METHOD_1_D861EC87938376A1_OFFSET UNITYSDK_OFFSET(0x15621AA0)
#define CLASS_1_17628DBDBD20BE6F_METHOD_1_DB67EEFB041425EC_OFFSET UNITYSDK_OFFSET(0x15623130)
#define CLASS_1_17628DBDBD20BE6F_METHOD_1_E378D9A7A36FC561_OFFSET UNITYSDK_OFFSET(0x156249D0)
#define CLASS_1_17628DBDBD20BE6F_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0x156216C0)
#define CLASS_1_17628DBDBD20BE6F_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0x15621710)
#define CLASS_1_17628DBDBD20BE6F_TICK_OFFSET UNITYSDK_OFFSET(0x15621ED0)
#define CLASS_1_17628DBDBD20BE6F__CTOR_OFFSET UNITYSDK_OFFSET(0x15624A30)

inline static constexpr unsigned int Class_1_17628DBDBD20BE6F_TypeDefinitionIndex = 51202;

class Class_1_17628DBDBD20BE6F : public ::System::Object
{
public:
	::System::Collections::Generic::SortedDictionary_2<::System::UInt64, ::Class_1_D30B741E780CB2FD*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::Class_1_98133438BFCB56ED*>* Field_1_2; // 0x20
	::RPG::GameCore::GameWorld* Field_1_3; // 0x28
	::System::Collections::Generic::List_1<::Class_1_D30B741E780CB2FD*>* Field_1_4; // 0x30
	::System::Collections::Generic::List_1<::Class_1_98133438BFCB56ED*>* Field_1_5; // 0x38
	::System::Collections::Generic::List_1<::Class_1_98133438BFCB56ED*>* Field_1_6; // 0x40
	::System::Collections::Generic::List_1<::Class_1_D30B741E780CB2FD*>* Field_1_7; // 0x48
	::System::Collections::Generic::List_1<::Class_1_D30B741E780CB2FD*>* Field_1_8; // 0x50
	::RPG::GameCore::Collision2DUpdateType Field_1_9; // 0x58
	::System::UInt32 Field_1_10; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17628DBDBD20BE6F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_AF338721792188C4(::Class_0_16E4307DCC419505_441* a1, ::RPG::GameCore::FixVec2 a2, ::RPG::GameCore::FixVec2 a3, ::RPG::MColor a4, ::System::Single a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_441*, ::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2, ::RPG::MColor, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_17628DBDBD20BE6F_METHOD_1_AF338721792188C4_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_C46E6CD6AE9E1B86(::RPG::GameCore::FixVec2 a1, ::System::Single a2, ::RPG::MColor a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixVec2, ::System::Single, ::RPG::MColor, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_17628DBDBD20BE6F_METHOD_1_C46E6CD6AE9E1B86_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_0F385A3C5FDF01D9(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2, ::RPG::MColor a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2, ::RPG::MColor, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_17628DBDBD20BE6F_METHOD_1_0F385A3C5FDF01D9_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_17628DBDBD20BE6F_ONPLUGININIT_OFFSET))(this, a1);
	}

	::System::Void OnPluginUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17628DBDBD20BE6F_ONPLUGINUNINIT_OFFSET))(this);
	}

	::Class_1_17628DBDBD20BE6F* Method_1_9C1A214F97FB8CE1(::RPG::GameCore::Collision2DUpdateType a1)
	{
		return ((::Class_1_17628DBDBD20BE6F*(*)(::PVOID, ::RPG::GameCore::Collision2DUpdateType))((::PBYTE)hIl2Cpp + CLASS_1_17628DBDBD20BE6F_METHOD_1_9C1A214F97FB8CE1_OFFSET))(this, a1);
	}

	::Class_1_98133438BFCB56ED* Method_1_D861EC87938376A1(::Class_0_16E4307DCC419505_441* a1, ::RPG::GameCore::FixVec2 a2, ::RPG::GameCore::FixVec2 a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::Object* a6, ::Class_0_16E4307DCC419505_440* a7)
	{
		return ((::Class_1_98133438BFCB56ED*(*)(::PVOID, ::Class_0_16E4307DCC419505_441*, ::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2, ::System::UInt32, ::System::UInt32, ::System::Object*, ::Class_0_16E4307DCC419505_440*))((::PBYTE)hIl2Cpp + CLASS_1_17628DBDBD20BE6F_METHOD_1_D861EC87938376A1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_81483EC470411B74(::Class_1_98133438BFCB56ED* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_98133438BFCB56ED*))((::PBYTE)hIl2Cpp + CLASS_1_17628DBDBD20BE6F_METHOD_1_81483EC470411B74_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_17628DBDBD20BE6F_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_1_9803082DC13B9390(::Class_1_E7BD46EB43F1A06F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7BD46EB43F1A06F*))((::PBYTE)hIl2Cpp + CLASS_1_17628DBDBD20BE6F_METHOD_1_9803082DC13B9390_OFFSET))(this, a1);
	}

	::System::Void Method_1_4FB9BE0E17E8AA4E(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_17628DBDBD20BE6F_METHOD_1_4FB9BE0E17E8AA4E_OFFSET))(this, a1);
	}

	::System::Void Method_1_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17628DBDBD20BE6F_METHOD_1_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Void Method_1_DB67EEFB041425EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17628DBDBD20BE6F_METHOD_1_DB67EEFB041425EC_OFFSET))(this);
	}

	::System::Void Method_1_D545E2F706415F81()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17628DBDBD20BE6F_METHOD_1_D545E2F706415F81_OFFSET))(this);
	}

	::System::Void Method_1_5587AE4B03E68C58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17628DBDBD20BE6F_METHOD_1_5587AE4B03E68C58_OFFSET))(this);
	}

	::System::Void Method_1_9BAB385F8658C2AD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17628DBDBD20BE6F_METHOD_1_9BAB385F8658C2AD_OFFSET))(this);
	}

	::System::Void Method_1_A8EE4F706DE7DB8F(::Class_1_98133438BFCB56ED* a1, ::Class_1_98133438BFCB56ED* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_98133438BFCB56ED*, ::Class_1_98133438BFCB56ED*))((::PBYTE)hIl2Cpp + CLASS_1_17628DBDBD20BE6F_METHOD_1_A8EE4F706DE7DB8F_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_C9AD03BD3B583EEE(::Class_1_98133438BFCB56ED* a1, ::Class_1_98133438BFCB56ED* a2, ::Struct_2_875B08BB13E31BEE& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_98133438BFCB56ED*, ::Class_1_98133438BFCB56ED*, ::Struct_2_875B08BB13E31BEE&))((::PBYTE)hIl2Cpp + CLASS_1_17628DBDBD20BE6F_METHOD_1_C9AD03BD3B583EEE_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_1_4628F59881B23161()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17628DBDBD20BE6F_METHOD_1_4628F59881B23161_OFFSET))(this);
	}

	::System::Void Method_1_A67D499B6B266137(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_17628DBDBD20BE6F_METHOD_1_A67D499B6B266137_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_E378D9A7A36FC561(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::UInt64(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_17628DBDBD20BE6F_METHOD_1_E378D9A7A36FC561_OFFSET))(this, a1, a2);
	}

	::Class_1_D30B741E780CB2FD* Method_1_7267F516B84E2D86(::Class_1_98133438BFCB56ED* a1, ::Class_1_98133438BFCB56ED* a2, ::System::Boolean a3)
	{
		return ((::Class_1_D30B741E780CB2FD*(*)(::PVOID, ::Class_1_98133438BFCB56ED*, ::Class_1_98133438BFCB56ED*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_17628DBDBD20BE6F_METHOD_1_7267F516B84E2D86_OFFSET))(this, a1, a2, a3);
	}
};
