#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Timeline { class ColorRecorderUnit; }
namespace MoleMole::Timeline { class FloatRecorderUnit; }
namespace MoleMole::Timeline { class TextureRecorderUnit; }
namespace MoleMole::Timeline { class Vector4RecorderUnit; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO___C_METHOD_1_1E701B763C6ADC83_OFFSET UNITYSDK_OFFSET(0x18D14FE0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO___C_METHOD_1_47DF2CDCC9D476BE_OFFSET UNITYSDK_OFFSET(0x18D14F80)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO___C_METHOD_1_4B96FF7EBA86283C_OFFSET UNITYSDK_OFFSET(0x18D14F40)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO___C_METHOD_1_4D005F40FA785E76_OFFSET UNITYSDK_OFFSET(0x18D14F60)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO___C_METHOD_1_7193E7A2B60D78BE_OFFSET UNITYSDK_OFFSET(0x18D14FA0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO___C_METHOD_1_B8D7B61530203092_OFFSET UNITYSDK_OFFSET(0x18D14FC0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D14EF0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18D14F30)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int RuntimeMaterialInfo___c_TypeDefinitionIndex = 58661;

	class RuntimeMaterialInfo___c : public ::System::Object
	{
	public:
		static ::MoleMole::Timeline::RuntimeMaterialInfo___c** StaticGet___9()
		{
			return (::MoleMole::Timeline::RuntimeMaterialInfo___c**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialInfo___c_TypeDefinitionIndex)->GetStaticField(0x37710);
		}
		static ::System::Func_2<::MoleMole::Timeline::ColorRecorderUnit*, ::System::Int32>** StaticGet___9__35_2()
		{
			return (::System::Func_2<::MoleMole::Timeline::ColorRecorderUnit*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialInfo___c_TypeDefinitionIndex)->GetStaticField(0x37718);
		}
		static ::System::Func_2<::MoleMole::Timeline::TextureRecorderUnit*, ::System::Int32>** StaticGet___9__35_1()
		{
			return (::System::Func_2<::MoleMole::Timeline::TextureRecorderUnit*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialInfo___c_TypeDefinitionIndex)->GetStaticField(0x37720);
		}
		static ::System::Func_2<::MoleMole::Timeline::FloatRecorderUnit*, ::System::Int32>** StaticGet___9__35_0()
		{
			return (::System::Func_2<::MoleMole::Timeline::FloatRecorderUnit*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialInfo___c_TypeDefinitionIndex)->GetStaticField(0x37728);
		}
		static ::System::Func_2<::MoleMole::Timeline::FloatRecorderUnit*, ::System::String*>** StaticGet___9__41_0()
		{
			return (::System::Func_2<::MoleMole::Timeline::FloatRecorderUnit*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialInfo___c_TypeDefinitionIndex)->GetStaticField(0x37730);
		}
		static ::System::Func_2<::MoleMole::Timeline::Vector4RecorderUnit*, ::System::Int32>** StaticGet___9__35_3()
		{
			return (::System::Func_2<::MoleMole::Timeline::Vector4RecorderUnit*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialInfo___c_TypeDefinitionIndex)->GetStaticField(0x37738);
		}
		static ::System::Func_2<::MoleMole::Timeline::FloatRecorderUnit*, ::System::Single>** StaticGet___9__41_1()
		{
			return (::System::Func_2<::MoleMole::Timeline::FloatRecorderUnit*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialInfo___c_TypeDefinitionIndex)->GetStaticField(0x37740);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO___C__CTOR_OFFSET))(this);
		}

		::System::Int32 Method_1_4B96FF7EBA86283C(::MoleMole::Timeline::Vector4RecorderUnit* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Timeline::Vector4RecorderUnit*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO___C_METHOD_1_4B96FF7EBA86283C_OFFSET))(this, a1);
		}

		::System::Single Method_1_4D005F40FA785E76(::MoleMole::Timeline::FloatRecorderUnit* a1)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Timeline::FloatRecorderUnit*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO___C_METHOD_1_4D005F40FA785E76_OFFSET))(this, a1);
		}

		::System::Int32 Method_1_47DF2CDCC9D476BE(::MoleMole::Timeline::TextureRecorderUnit* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Timeline::TextureRecorderUnit*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO___C_METHOD_1_47DF2CDCC9D476BE_OFFSET))(this, a1);
		}

		::System::Int32 Method_1_7193E7A2B60D78BE(::MoleMole::Timeline::ColorRecorderUnit* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Timeline::ColorRecorderUnit*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO___C_METHOD_1_7193E7A2B60D78BE_OFFSET))(this, a1);
		}

		::System::String* Method_1_B8D7B61530203092(::MoleMole::Timeline::FloatRecorderUnit* a1)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::Timeline::FloatRecorderUnit*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO___C_METHOD_1_B8D7B61530203092_OFFSET))(this, a1);
		}

		::System::Int32 Method_1_1E701B763C6ADC83(::MoleMole::Timeline::FloatRecorderUnit* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Timeline::FloatRecorderUnit*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO___C_METHOD_1_1E701B763C6ADC83_OFFSET))(this, a1);
		}
	};
}
