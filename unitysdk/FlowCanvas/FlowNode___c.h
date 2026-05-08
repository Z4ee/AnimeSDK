#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class Port; }
namespace FlowCanvas { class ValueInput; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define FLOWCANVAS_FLOWNODE___C__ASSIGNSELFINSTANCEPORT_B__66_0_OFFSET UNITYSDK_OFFSET(0x1B0E89F0)
#define FLOWCANVAS_FLOWNODE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B0E88C0)
#define FLOWCANVAS_FLOWNODE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0E8900)
#define FLOWCANVAS_FLOWNODE___C__GETFIRSTINPUTOFTYPE_B__64_0_OFFSET UNITYSDK_OFFSET(0x1B0E8910)
#define FLOWCANVAS_FLOWNODE___C__GETFIRSTOUTPUTOFTYPE_B__65_0_OFFSET UNITYSDK_OFFSET(0x1B0E8980)
#define FLOWCANVAS_FLOWNODE___C__REPLACEWITH_B__97_0_OFFSET UNITYSDK_OFFSET(0x1B0E8A30)
#define FLOWCANVAS_FLOWNODE___C__REPLACEWITH_B__97_1_OFFSET UNITYSDK_OFFSET(0x1B0E8A40)

namespace FlowCanvas
{
	inline static constexpr unsigned int FlowNode___c_TypeDefinitionIndex = 27879;

	class FlowNode___c : public ::System::Object
	{
	public:
		static ::FlowCanvas::FlowNode___c** StaticGet___9()
		{
			return (::FlowCanvas::FlowNode___c**)Il2CppClass::FromTypeDefinitionIndex(FlowNode___c_TypeDefinitionIndex)->GetStaticField(0x1F9C0);
		}
		static ::System::Func_2<::FlowCanvas::Port*, ::System::Int32>** StaticGet___9__65_0()
		{
			return (::System::Func_2<::FlowCanvas::Port*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(FlowNode___c_TypeDefinitionIndex)->GetStaticField(0x1F9C8);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>, ::System::String*>** StaticGet___9__97_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FlowNode___c_TypeDefinitionIndex)->GetStaticField(0x1F9D0);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>, ::System::Object*>** StaticGet___9__97_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(FlowNode___c_TypeDefinitionIndex)->GetStaticField(0x1F9D8);
		}
		static ::System::Func_2<::FlowCanvas::Port*, ::System::Int32>** StaticGet___9__64_0()
		{
			return (::System::Func_2<::FlowCanvas::Port*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(FlowNode___c_TypeDefinitionIndex)->GetStaticField(0x1F9E0);
		}
		static ::System::Func_2<::FlowCanvas::ValueInput*, ::System::Boolean>** StaticGet___9__66_0()
		{
			return (::System::Func_2<::FlowCanvas::ValueInput*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FlowNode___c_TypeDefinitionIndex)->GetStaticField(0x1F9E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetFirstInputOfType_b__64_0(::FlowCanvas::Port* p)
		{
			return ((::System::Int32(*)(::PVOID, ::FlowCanvas::Port*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE___C__GETFIRSTINPUTOFTYPE_B__64_0_OFFSET))(this, p);
		}

		::System::Int32 _GetFirstOutputOfType_b__65_0(::FlowCanvas::Port* p)
		{
			return ((::System::Int32(*)(::PVOID, ::FlowCanvas::Port*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE___C__GETFIRSTOUTPUTOFTYPE_B__65_0_OFFSET))(this, p);
		}

		::System::Boolean _AssignSelfInstancePort_b__66_0(::FlowCanvas::ValueInput* p)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlowCanvas::ValueInput*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE___C__ASSIGNSELFINSTANCEPORT_B__66_0_OFFSET))(this, p);
		}

		::System::String* _ReplaceWith_b__97_0(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*> k)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE___C__REPLACEWITH_B__97_0_OFFSET))(this, k);
		}

		::System::Object* _ReplaceWith_b__97_1(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*> v)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE___C__REPLACEWITH_B__97_1_OFFSET))(this, v);
		}
	};
}
