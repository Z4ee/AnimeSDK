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

#define MOLEMOLE_STATISTICSATTR_METHOD_1_094E85B034039595_OFFSET UNITYSDK_OFFSET(0x13AD90D0)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_117C627844A89315_OFFSET UNITYSDK_OFFSET(0x13AD9610)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_33743D5333D90F94_OFFSET UNITYSDK_OFFSET(0x13AD9C70)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_4117615613B825D8_OFFSET UNITYSDK_OFFSET(0x13ADA800)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_611D00A0EB5D7DE6_OFFSET UNITYSDK_OFFSET(0x13AD9AE0)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_7043B9A9D77FB306_OFFSET UNITYSDK_OFFSET(0x13ADA010)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_7889E856344009E9_OFFSET UNITYSDK_OFFSET(0x13ADAEB0)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_90D0DC11D34D7114_OFFSET UNITYSDK_OFFSET(0x13ADA150)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_A36150C5DCC8409E_1_OFFSET UNITYSDK_OFFSET(0x13ADA680)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_A36150C5DCC8409E_2_OFFSET UNITYSDK_OFFSET(0x13ADA400)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_A36150C5DCC8409E_3_OFFSET UNITYSDK_OFFSET(0x13ADA6D0)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x13AD9440)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_AFD7CB1F3D8E9C9F_OFFSET UNITYSDK_OFFSET(0x13AD9D00)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_B67DCF72B717FA9F_OFFSET UNITYSDK_OFFSET(0x13ADA2C0)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x13ADA450)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_C21F7B27F4CE53CB_OFFSET UNITYSDK_OFFSET(0x13ADAF20)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_D22B628A0B0EF318_OFFSET UNITYSDK_OFFSET(0x13ADA720)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_D73DAA7FC3D80F47_1_OFFSET UNITYSDK_OFFSET(0x13AD9490)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_D73DAA7FC3D80F47_OFFSET UNITYSDK_OFFSET(0x13AD8DC0)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_D908BB9767125138_OFFSET UNITYSDK_OFFSET(0x13AD8F50)
#define MOLEMOLE_STATISTICSATTR_METHOD_1_FCCBC857CD61BCE8_OFFSET UNITYSDK_OFFSET(0x13AD9930)
#define MOLEMOLE_STATISTICSATTR__CCTOR_OFFSET UNITYSDK_OFFSET(0x13AD8CA0)
#define MOLEMOLE_STATISTICSATTR__CTOR_OFFSET UNITYSDK_OFFSET(0x13AD8AA0)

namespace MoleMole
{
	inline static constexpr unsigned int StatisticsAttr_TypeDefinitionIndex = 59105;

	class StatisticsAttr : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Reflection::PropertyInfo*>** StaticGet_propertyInfoCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Reflection::PropertyInfo*>**)Il2CppClass::FromTypeDefinitionIndex(StatisticsAttr_TypeDefinitionIndex)->GetStaticField(0x46ED0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Reflection::FieldInfo*>** StaticGet_fieldInfoCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Reflection::FieldInfo*>**)Il2CppClass::FromTypeDefinitionIndex(StatisticsAttr_TypeDefinitionIndex)->GetStaticField(0x46ED8);
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

		::System::Single Method_1_D73DAA7FC3D80F47(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_D73DAA7FC3D80F47_OFFSET))(this, a1, a2);
		}

		::System::Single Method_1_D908BB9767125138(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_D908BB9767125138_OFFSET))(this, a1);
		}

		::System::Void Method_1_094E85B034039595(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_094E85B034039595_OFFSET))(this, a1, a2);
		}

		::System::Single Method_1_A36150C5DCC8409E()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
		}

		::System::Single Method_1_D73DAA7FC3D80F47_1(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_D73DAA7FC3D80F47_1_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_117C627844A89315(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_117C627844A89315_OFFSET))(this, a1, a2);
		}

		::System::Single Method_1_33743D5333D90F94(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_33743D5333D90F94_OFFSET))(this, a1);
		}

		::System::Void Method_1_AFD7CB1F3D8E9C9F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_AFD7CB1F3D8E9C9F_OFFSET))(this);
		}

		::System::Void Method_1_B7F8E0B4AF22DEA3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_B7F8E0B4AF22DEA3_OFFSET))(this);
		}

		::System::Single Method_1_90D0DC11D34D7114()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_90D0DC11D34D7114_OFFSET))(this);
		}

		::System::Single Method_1_A36150C5DCC8409E_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_A36150C5DCC8409E_1_OFFSET))(this);
		}

		::System::Single Method_1_FCCBC857CD61BCE8(::System::Single a1, ::System::Single a2, ::System::Int32 a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_FCCBC857CD61BCE8_OFFSET))(this, a1, a2, a3);
		}

		::System::Single Method_1_A36150C5DCC8409E_2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_A36150C5DCC8409E_2_OFFSET))(this);
		}

		::System::Single Method_1_611D00A0EB5D7DE6(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_611D00A0EB5D7DE6_OFFSET))(this, a1, a2);
		}

		::System::Single Method_1_A36150C5DCC8409E_3()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_A36150C5DCC8409E_3_OFFSET))(this);
		}

		::System::Single Method_1_7043B9A9D77FB306()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_7043B9A9D77FB306_OFFSET))(this);
		}

		::System::Void Method_1_D22B628A0B0EF318(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_D22B628A0B0EF318_OFFSET))(this, a1, a2);
		}

		::System::Single Method_1_B67DCF72B717FA9F()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_B67DCF72B717FA9F_OFFSET))(this);
		}

		::System::Void Method_1_4117615613B825D8(::System::Object* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_4117615613B825D8_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_7889E856344009E9(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_7889E856344009E9_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_C21F7B27F4CE53CB(::System::Collections::Generic::List_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_METHOD_1_C21F7B27F4CE53CB_OFFSET))(this, a1);
		}
	};
}
