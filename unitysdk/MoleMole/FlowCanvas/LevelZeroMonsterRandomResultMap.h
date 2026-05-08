#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B897E51F16FDAD6D;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MOLEMOLE_FLOWCANVAS_LEVELZEROMONSTERRANDOMRESULTMAP_GET_LIMITTHEME_OFFSET UNITYSDK_OFFSET(0x11737920)
#define MOLEMOLE_FLOWCANVAS_LEVELZEROMONSTERRANDOMRESULTMAP_METHOD_1_8E0634CDC64D0684_OFFSET UNITYSDK_OFFSET(0x117379F0)
#define MOLEMOLE_FLOWCANVAS_LEVELZEROMONSTERRANDOMRESULTMAP_METHOD_1_D598CAFE5DB5C502_OFFSET UNITYSDK_OFFSET(0x11737B60)
#define MOLEMOLE_FLOWCANVAS_LEVELZEROMONSTERRANDOMRESULTMAP_SET_LIMITTHEME_OFFSET UNITYSDK_OFFSET(0x11737930)
#define MOLEMOLE_FLOWCANVAS_LEVELZEROMONSTERRANDOMRESULTMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x11737940)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int LevelZeroMonsterRandomResultMap_TypeDefinitionIndex = 78726;

	class LevelZeroMonsterRandomResultMap : public ::System::Object
	{
	public:
		// static const ::System::Int32 CommonTheme = 0x0; // 0x0
		// static const ::System::String* LevelZeroMonsterRandomResultMapKey; // 0x0
		::System::Int32 _limitTheme_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_B897E51F16FDAD6D*>* monsterRandomResults; // 0x18
		::System::Collections::Generic::HashSet_1<::System::Int32>* ExitedCamps; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_LEVELZEROMONSTERRANDOMRESULTMAP__CTOR_OFFSET))(this);
		}

		::System::Int32 get_limitTheme()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_LEVELZEROMONSTERRANDOMRESULTMAP_GET_LIMITTHEME_OFFSET))(this);
		}

		::System::Void set_limitTheme(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_LEVELZEROMONSTERRANDOMRESULTMAP_SET_LIMITTHEME_OFFSET))(this, a1);
		}

		::System::Void Method_1_8E0634CDC64D0684(::Class_1_B897E51F16FDAD6D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B897E51F16FDAD6D*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_LEVELZEROMONSTERRANDOMRESULTMAP_METHOD_1_8E0634CDC64D0684_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_D598CAFE5DB5C502(::System::Int32 a1, ::Class_1_B897E51F16FDAD6D*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Class_1_B897E51F16FDAD6D*&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_LEVELZEROMONSTERRANDOMRESULTMAP_METHOD_1_D598CAFE5DB5C502_OFFSET))(this, a1, a2);
		}
	};
}
