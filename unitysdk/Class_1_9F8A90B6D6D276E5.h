#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateAreaType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_4A2801D02B2BB246_3;
class Class_1_BAB7878C1DBCE4EF;
class Class_1_C50814066AD5D308;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9F8A90B6D6D276E5_GET_AREATYPE_OFFSET UNITYSDK_OFFSET(0x17C65750)
#define CLASS_1_9F8A90B6D6D276E5_GET_BUFFAMPLIFICATIONMAP_OFFSET UNITYSDK_OFFSET(0x17C657B0)
#define CLASS_1_9F8A90B6D6D276E5_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x17C65770)
#define CLASS_1_9F8A90B6D6D276E5_GET_INSERTMONSTERMAP_OFFSET UNITYSDK_OFFSET(0x17C65790)
#define CLASS_1_9F8A90B6D6D276E5_METHOD_1_223DE4A460F5CF9C_OFFSET UNITYSDK_OFFSET(0x17C657D0)
#define CLASS_1_9F8A90B6D6D276E5_METHOD_1_F2E3DCA4A6BF5D23_OFFSET UNITYSDK_OFFSET(0x17C66320)
#define CLASS_1_9F8A90B6D6D276E5_METHOD_1_F7721D0B419638BB_OFFSET UNITYSDK_OFFSET(0x17C66720)
#define CLASS_1_9F8A90B6D6D276E5_SET_AREATYPE_OFFSET UNITYSDK_OFFSET(0x17C65760)
#define CLASS_1_9F8A90B6D6D276E5_SET_BUFFAMPLIFICATIONMAP_OFFSET UNITYSDK_OFFSET(0x17C657C0)
#define CLASS_1_9F8A90B6D6D276E5_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x17C65780)
#define CLASS_1_9F8A90B6D6D276E5_SET_INSERTMONSTERMAP_OFFSET UNITYSDK_OFFSET(0x17C657A0)
#define CLASS_1_9F8A90B6D6D276E5__CTOR_OFFSET UNITYSDK_OFFSET(0x17C66240)

inline static constexpr unsigned int Class_1_9F8A90B6D6D276E5_TypeDefinitionIndex = 53561;

class Class_1_9F8A90B6D6D276E5 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* _BuffAmplificationMap_k__BackingField; // 0x10
	::Class_1_BAB7878C1DBCE4EF* _InsertMonsterMap_k__BackingField; // 0x18
	::System::Collections::Generic::List_1<::Class_1_C50814066AD5D308*>* Field_1_2; // 0x20
	::System::UInt32 Field_1_3; // 0x28
	::RPG::GameCore::FateAreaType _AreaType_k__BackingField; // 0x2C
	::System::UInt32 _Difficulty_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F8A90B6D6D276E5__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FateAreaType get_AreaType()
	{
		return ((::RPG::GameCore::FateAreaType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F8A90B6D6D276E5_GET_AREATYPE_OFFSET))(this);
	}

	::System::Void set_AreaType(::RPG::GameCore::FateAreaType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateAreaType))((::PBYTE)hIl2Cpp + CLASS_1_9F8A90B6D6D276E5_SET_AREATYPE_OFFSET))(this, a1);
	}

	::System::UInt32 get_Difficulty()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F8A90B6D6D276E5_GET_DIFFICULTY_OFFSET))(this);
	}

	::System::Void set_Difficulty(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9F8A90B6D6D276E5_SET_DIFFICULTY_OFFSET))(this, a1);
	}

	::Class_1_BAB7878C1DBCE4EF* get_InsertMonsterMap()
	{
		return ((::Class_1_BAB7878C1DBCE4EF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F8A90B6D6D276E5_GET_INSERTMONSTERMAP_OFFSET))(this);
	}

	::System::Void set_InsertMonsterMap(::Class_1_BAB7878C1DBCE4EF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BAB7878C1DBCE4EF*))((::PBYTE)hIl2Cpp + CLASS_1_9F8A90B6D6D276E5_SET_INSERTMONSTERMAP_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* get_BuffAmplificationMap()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F8A90B6D6D276E5_GET_BUFFAMPLIFICATIONMAP_OFFSET))(this);
	}

	::System::Void set_BuffAmplificationMap(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_9F8A90B6D6D276E5_SET_BUFFAMPLIFICATIONMAP_OFFSET))(this, a1);
	}

	static ::Class_1_9F8A90B6D6D276E5* Method_1_223DE4A460F5CF9C(::Class_1_4A2801D02B2BB246_3* a1)
	{
		return ((::Class_1_9F8A90B6D6D276E5*(*)(::Class_1_4A2801D02B2BB246_3*))((::PBYTE)hIl2Cpp + CLASS_1_9F8A90B6D6D276E5_METHOD_1_223DE4A460F5CF9C_OFFSET))(a1);
	}

	::Class_1_4A2801D02B2BB246_3* Method_1_F2E3DCA4A6BF5D23()
	{
		return ((::Class_1_4A2801D02B2BB246_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F8A90B6D6D276E5_METHOD_1_F2E3DCA4A6BF5D23_OFFSET))(this);
	}

	::Class_1_9F8A90B6D6D276E5* Method_1_F7721D0B419638BB()
	{
		return ((::Class_1_9F8A90B6D6D276E5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F8A90B6D6D276E5_METHOD_1_F7721D0B419638BB_OFFSET))(this);
	}
};
