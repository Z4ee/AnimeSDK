#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/Spline/NAPSplineMetaPluginBase.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_BASEDATA_GET_NAME_1_OFFSET UNITYSDK_OFFSET(0x13049400)
#define MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_BASEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x130493C0)
#define MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_BASEDATA_GET_SPLINENAME_OFFSET UNITYSDK_OFFSET(0x13049440)
#define MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_BASEDATA_GET_TAGLIST_OFFSET UNITYSDK_OFFSET(0x13049450)
#define MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_BASEDATA_METHOD_8_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x130499E0)
#define MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_BASEDATA_RECORDDATA_1_OFFSET UNITYSDK_OFFSET(0x13049550)
#define MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_BASEDATA_RECORDDATA_2_OFFSET UNITYSDK_OFFSET(0x13049610)
#define MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_BASEDATA_RECORDDATA_OFFSET UNITYSDK_OFFSET(0x13049460)
#define MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_BASEDATA_REMOVEDATA_1_OFFSET UNITYSDK_OFFSET(0x13049700)
#define MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_BASEDATA_REMOVEDATA_2_OFFSET UNITYSDK_OFFSET(0x13049860)
#define MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_BASEDATA_REMOVEDATA_OFFSET UNITYSDK_OFFSET(0x13049660)
#define MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_BASEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x130498B0)

namespace MoleMole::Spline
{
	inline static constexpr unsigned int NAPSplineMetaPlugin_BaseData_TypeDefinitionIndex = 74150;

	class NAPSplineMetaPlugin_BaseData : public ::MoleMole::Spline::NAPSplineMetaPluginBase
	{
	public:
		::System::String* Field_8_0; // 0x30
		::System::Collections::Generic::List_1<::System::String*>* Field_8_1; // 0x38
		::System::Collections::Generic::List_1<::System::String*>* Field_8_2; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_BASEDATA__CTOR_OFFSET))(this);
		}

		static ::System::String* get_NAME()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_BASEDATA_GET_NAME_OFFSET))();
		}

		::System::String* get_Name_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_BASEDATA_GET_NAME_1_OFFSET))(this);
		}

		::System::String* get_SplineName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_BASEDATA_GET_SPLINENAME_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::String*>* get_TagList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_BASEDATA_GET_TAGLIST_OFFSET))(this);
		}

		::System::Void RecordData(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_BASEDATA_RECORDDATA_OFFSET))(this, a1, a2);
		}

		::System::Void RecordData_1(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_BASEDATA_RECORDDATA_1_OFFSET))(this, a1);
		}

		::System::Void RecordData_2(::Foundation::ViewObject::ViewObjectHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_BASEDATA_RECORDDATA_2_OFFSET))(this, a1);
		}

		::System::Void RemoveData(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_BASEDATA_REMOVEDATA_OFFSET))(this, a1);
		}

		::System::Void RemoveData_1(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_BASEDATA_REMOVEDATA_1_OFFSET))(this, a1);
		}

		::System::Void RemoveData_2(::Foundation::ViewObject::ViewObjectHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_BASEDATA_REMOVEDATA_2_OFFSET))(this, a1);
		}

		::System::Void Method_8_7D201B4343E63821(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_BASEDATA_METHOD_8_7D201B4343E63821_OFFSET))(this, a1);
		}
	};
}
