#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class PropertyInfo; }

#define MOLEMOLE_STATISTICSATTR_METHOD_1_094E85B034039595_OFFSET UNITYSDK_OFFSET(0x13872A60)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_117C627844A89315_OFFSET UNITYSDK_OFFSET(0x138745A0)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_18A3BFC9738829A7_OFFSET UNITYSDK_OFFSET(0x13874270)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_18AF8EE91E337328_OFFSET UNITYSDK_OFFSET(0x138748C0)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_33743D5333D90F94_OFFSET UNITYSDK_OFFSET(0x138729D0)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_3690509AB86662EB_OFFSET UNITYSDK_OFFSET(0x138740C0)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_4117615613B825D8_OFFSET UNITYSDK_OFFSET(0x138736A0)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_7043B9A9D77FB306_OFFSET UNITYSDK_OFFSET(0x13873260)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_7889E856344009E9_OFFSET UNITYSDK_OFFSET(0x13874AF0)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_90D0DC11D34D7114_OFFSET UNITYSDK_OFFSET(0x138733A0)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_A36150C5DCC8409E_1_OFFSET UNITYSDK_OFFSET(0x13873EE0)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_A36150C5DCC8409E_2_OFFSET UNITYSDK_OFFSET(0x13874A50)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_A36150C5DCC8409E_3_OFFSET UNITYSDK_OFFSET(0x13874AA0)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x13873650)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_ACEC1E3085AC43BE_OFFSET UNITYSDK_OFFSET(0x13873D50)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_AFD7CB1F3D8E9C9F_OFFSET UNITYSDK_OFFSET(0x13872F50)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_B67DCF72B717FA9F_OFFSET UNITYSDK_OFFSET(0x13873510)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x13874B60)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_C21F7B27F4CE53CB_OFFSET UNITYSDK_OFFSET(0x13874350)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_D73DAA7FC3D80F47_OFFSET UNITYSDK_OFFSET(0x13873F30)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_D908BB9767125138_OFFSET UNITYSDK_OFFSET(0x13872DD0)
#define MOLEMOLE_STATISTICSATTR__CCTOR_OFFSET UNITYSDK_OFFSET(0x138728B0)
#define MOLEMOLE_STATISTICSATTR__CTOR_OFFSET UNITYSDK_OFFSET(0x138726B0)

namespace MoleMole
{
	inline static constexpr unsigned int StatisticsAttr_TypeDefinitionIndex = 62062;

	class StatisticsAttr : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Reflection::PropertyInfo*>** StaticGet_propertyInfoCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Reflection::PropertyInfo*>**)Il2CppClass::FromTypeDefinitionIndex(StatisticsAttr_TypeDefinitionIndex)->GetStaticField(0x405A0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Reflection::FieldInfo*>** StaticGet_fieldInfoCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Reflection::FieldInfo*>**)Il2CppClass::FromTypeDefinitionIndex(StatisticsAttr_TypeDefinitionIndex)->GetStaticField(0x405A8);
		}
		::System::Boolean muted; // 0x10
		::System::String* attrName; // 0x18
		::System::Single attrTotalVal; // 0x20
		::System::String* showName; // 0x28
		::System::Single valueRate; // 0x30
		::System::Single duration; // 0x34
		::System::Single showRange; // 0x38
		::System::Single statisticRange; // 0x3C
		::System::Boolean statisticPerFrame; // 0x40
		::UnityEngine::Color showColor; // 0x44
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* cachedAttrTotalValPerTime; // 0x58
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* attrTotalValPerTimeList; // 0x60
		::System::Single spsLessTotalTime; // 0x68
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* spsLessTimePerTimeList; // 0x70
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* cachedPerTimeData; // 0x78
		::System::Collections::Generic::Queue_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* cachedData; // 0x80
		::System::Single lastTime; // 0x88
		::System::Single totalValDuration; // 0x8C
		::System::Single showTime; // 0x90
		::System::Single totalStatisticRangeVal; // 0x94
		::System::Collections::Generic::Queue_1<::System::Single>* damageQueue; // 0x98
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* scopeValueDic; // 0xA0
		::System::Single maxValueScope; // 0xA8
		::System::Single meanValueScope; // 0xAC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR__CCTOR_OFFSET))();
		}

		::System::Single Method_1_33743D5333D90F94(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_33743D5333D90F94_OFFSET))(this, a1);
		}

		::System::Void Method_1_094E85B034039595(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_094E85B034039595_OFFSET))(this, a1, a2);
		}

		::System::Single Method_1_D908BB9767125138(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_D908BB9767125138_OFFSET))(this, a1);
		}

		::System::Void Method_1_AFD7CB1F3D8E9C9F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_AFD7CB1F3D8E9C9F_OFFSET))(this);
		}

		::System::Void Method_1_4117615613B825D8(::System::Object* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_4117615613B825D8_OFFSET))(this, a1, a2);
		}

		::System::Single Method_1_ACEC1E3085AC43BE(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_ACEC1E3085AC43BE_OFFSET))(this, a1, a2);
		}

		::System::Single Method_1_A36150C5DCC8409E()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
		}

		::System::Single Method_1_90D0DC11D34D7114()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_90D0DC11D34D7114_OFFSET))(this);
		}

		::System::Single Method_1_A36150C5DCC8409E_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_A36150C5DCC8409E_1_OFFSET))(this);
		}

		::System::Single Method_1_D73DAA7FC3D80F47(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_D73DAA7FC3D80F47_OFFSET))(this, a1, a2);
		}

		::System::Single Method_1_3690509AB86662EB(::System::Single a1, ::System::Single a2, ::System::Int32 a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_3690509AB86662EB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_18A3BFC9738829A7(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_18A3BFC9738829A7_OFFSET))(this, a1, a2);
		}

		::System::Single Method_1_B67DCF72B717FA9F()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_B67DCF72B717FA9F_OFFSET))(this);
		}

		::System::Void Method_1_C21F7B27F4CE53CB(::System::Collections::Generic::List_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_C21F7B27F4CE53CB_OFFSET))(this, a1);
		}

		::System::Void Method_1_117C627844A89315(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_117C627844A89315_OFFSET))(this, a1, a2);
		}

		::System::Single Method_1_A36150C5DCC8409E_2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_A36150C5DCC8409E_2_OFFSET))(this);
		}

		::System::Single Method_1_A36150C5DCC8409E_3()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_A36150C5DCC8409E_3_OFFSET))(this);
		}

		::System::Single Method_1_7043B9A9D77FB306()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_7043B9A9D77FB306_OFFSET))(this);
		}

		::System::Void Method_1_7889E856344009E9(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_7889E856344009E9_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_B7F8E0B4AF22DEA3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_B7F8E0B4AF22DEA3_OFFSET))(this);
		}

		::System::Single Method_1_18AF8EE91E337328(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_18AF8EE91E337328_OFFSET))(this, a1, a2);
		}
	};
}
