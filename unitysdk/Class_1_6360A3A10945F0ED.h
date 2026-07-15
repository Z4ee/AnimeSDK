#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_12E54BDA00FBCA01;
class Class_1_3B1EA953A4067E26_2;
class Class_1_413D5A0FF338BAB8;
class Class_1_D15D83CB948FC3A0;
class Class_1_D2C97E5E9F60802E;
class Class_2_68CB91321C3E76A7;
namespace Entitas { class IEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_6360A3A10945F0ED_GET_CASTQUEUES_OFFSET UNITYSDK_OFFSET(0x14E60800)
#define CLASS_1_6360A3A10945F0ED_GET_FRAMEABILITYUSECOUNT_OFFSET UNITYSDK_OFFSET(0x14E60810)
#define CLASS_1_6360A3A10945F0ED_GET_NEXTCASTTIME_OFFSET UNITYSDK_OFFSET(0x14E607F0)
#define CLASS_1_6360A3A10945F0ED_METHOD_1_01774206ABF53A0E_OFFSET UNITYSDK_OFFSET(0x14E5F8E0)
#define CLASS_1_6360A3A10945F0ED_METHOD_1_08E6D1A4DC44556A_OFFSET UNITYSDK_OFFSET(0x14E5F1C0)
#define CLASS_1_6360A3A10945F0ED_METHOD_1_20E060AF2A40CA51_OFFSET UNITYSDK_OFFSET(0x14E5F370)
#define CLASS_1_6360A3A10945F0ED_METHOD_1_281255C747FAABE8_OFFSET UNITYSDK_OFFSET(0x14E5F030)
#define CLASS_1_6360A3A10945F0ED_METHOD_1_489E0B827662C211_OFFSET UNITYSDK_OFFSET(0x14E602E0)
#define CLASS_1_6360A3A10945F0ED_METHOD_1_4B47E0E437013140_OFFSET UNITYSDK_OFFSET(0x14E601A0)
#define CLASS_1_6360A3A10945F0ED_METHOD_1_63882E0318B95793_OFFSET UNITYSDK_OFFSET(0x14E5E770)
#define CLASS_1_6360A3A10945F0ED_METHOD_1_933713A4305E9272_OFFSET UNITYSDK_OFFSET(0x14E5F420)
#define CLASS_1_6360A3A10945F0ED_METHOD_1_9AF9D9529B0BC153_OFFSET UNITYSDK_OFFSET(0x14E5F620)
#define CLASS_1_6360A3A10945F0ED_METHOD_1_D3BBF140D24D382E_OFFSET UNITYSDK_OFFSET(0x14E5FFD0)
#define CLASS_1_6360A3A10945F0ED_METHOD_1_DADC23986433A9E4_OFFSET UNITYSDK_OFFSET(0x14E5FB80)
#define CLASS_1_6360A3A10945F0ED_METHOD_1_FA0119DD445A672F_OFFSET UNITYSDK_OFFSET(0x14E5E600)
#define CLASS_1_6360A3A10945F0ED__CTOR_OFFSET UNITYSDK_OFFSET(0x14E5E3D0)

inline static constexpr unsigned int Class_1_6360A3A10945F0ED_TypeDefinitionIndex = 73349;

class Class_1_6360A3A10945F0ED : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* _NextCastTime_k__BackingField; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Queue_1<::Class_1_12E54BDA00FBCA01*>*>* _CastQueues_k__BackingField; // 0x18
	::Class_1_D15D83CB948FC3A0* Field_1_2; // 0x20
	::Class_1_3B1EA953A4067E26_2* Field_1_3; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _FrameAbilityUseCount_k__BackingField; // 0x30
	::System::Single Field_1_5; // 0x38
	::System::Int32 Field_1_6; // 0x3C
	::System::Int32 Field_1_7; // 0x40

	::System::Void _ctor(::Class_1_3B1EA953A4067E26_2* a1, ::Class_1_D15D83CB948FC3A0* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3B1EA953A4067E26_2*, ::Class_1_D15D83CB948FC3A0*))((::PBYTE)hIl2Cpp + CLASS_1_6360A3A10945F0ED__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FA0119DD445A672F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6360A3A10945F0ED_METHOD_1_FA0119DD445A672F_OFFSET))(this);
	}

	::System::Void Method_1_63882E0318B95793(::Class_1_413D5A0FF338BAB8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_413D5A0FF338BAB8*))((::PBYTE)hIl2Cpp + CLASS_1_6360A3A10945F0ED_METHOD_1_63882E0318B95793_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_08E6D1A4DC44556A(::Class_1_D2C97E5E9F60802E* a1, ::Class_1_413D5A0FF338BAB8* a2, ::Class_2_68CB91321C3E76A7* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D2C97E5E9F60802E*, ::Class_1_413D5A0FF338BAB8*, ::Class_2_68CB91321C3E76A7*))((::PBYTE)hIl2Cpp + CLASS_1_6360A3A10945F0ED_METHOD_1_08E6D1A4DC44556A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_20E060AF2A40CA51(::Class_1_D2C97E5E9F60802E* a1, ::Class_2_68CB91321C3E76A7* a2, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* a3, ::System::Int32 a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D2C97E5E9F60802E*, ::Class_2_68CB91321C3E76A7*, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6360A3A10945F0ED_METHOD_1_20E060AF2A40CA51_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_01774206ABF53A0E(::Class_2_68CB91321C3E76A7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_68CB91321C3E76A7*))((::PBYTE)hIl2Cpp + CLASS_1_6360A3A10945F0ED_METHOD_1_01774206ABF53A0E_OFFSET))(this, a1);
	}

	::System::Void Method_1_281255C747FAABE8(::Class_2_68CB91321C3E76A7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_68CB91321C3E76A7*))((::PBYTE)hIl2Cpp + CLASS_1_6360A3A10945F0ED_METHOD_1_281255C747FAABE8_OFFSET))(this, a1);
	}

	::System::Void Method_1_9AF9D9529B0BC153(::Class_1_D2C97E5E9F60802E* a1, ::Class_2_68CB91321C3E76A7* a2, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D2C97E5E9F60802E*, ::Class_2_68CB91321C3E76A7*, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6360A3A10945F0ED_METHOD_1_9AF9D9529B0BC153_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_933713A4305E9272(::Class_2_68CB91321C3E76A7* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_68CB91321C3E76A7*))((::PBYTE)hIl2Cpp + CLASS_1_6360A3A10945F0ED_METHOD_1_933713A4305E9272_OFFSET))(this, a1);
	}

	::System::Void Method_1_DADC23986433A9E4(::Class_1_D2C97E5E9F60802E* a1, ::Class_2_68CB91321C3E76A7* a2, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D2C97E5E9F60802E*, ::Class_2_68CB91321C3E76A7*, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6360A3A10945F0ED_METHOD_1_DADC23986433A9E4_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_4B47E0E437013140(::System::UInt32 a1, ::Entitas::IEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_1_6360A3A10945F0ED_METHOD_1_4B47E0E437013140_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D3BBF140D24D382E(::Class_1_D2C97E5E9F60802E* a1, ::System::Int32 a2, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D2C97E5E9F60802E*, ::System::Int32, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6360A3A10945F0ED_METHOD_1_D3BBF140D24D382E_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_489E0B827662C211()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6360A3A10945F0ED_METHOD_1_489E0B827662C211_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* get_NextCastTime()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6360A3A10945F0ED_GET_NEXTCASTTIME_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Queue_1<::Class_1_12E54BDA00FBCA01*>*>* get_CastQueues()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Queue_1<::Class_1_12E54BDA00FBCA01*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6360A3A10945F0ED_GET_CASTQUEUES_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* get_FrameAbilityUseCount()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6360A3A10945F0ED_GET_FRAMEABILITYUSECOUNT_OFFSET))(this);
	}
};
