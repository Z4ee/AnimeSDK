#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ChessboardTextureSheetTagsData; }
namespace MoleMole { class ChessboardTextureTagConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_521A1285DEACFBB3_METHOD_1_27CDA859F7ADAF64_OFFSET UNITYSDK_OFFSET(0x15630F60)
#define CLASS_1_521A1285DEACFBB3_METHOD_1_30D9F359AEE91264_OFFSET UNITYSDK_OFFSET(0x15631250)
#define CLASS_1_521A1285DEACFBB3_METHOD_1_415752109343FC19_OFFSET UNITYSDK_OFFSET(0x15630E70)
#define CLASS_1_521A1285DEACFBB3__CTOR_OFFSET UNITYSDK_OFFSET(0x15630E60)

inline static constexpr unsigned int Class_1_521A1285DEACFBB3_TypeDefinitionIndex = 68535;

class Class_1_521A1285DEACFBB3 : public ::System::Object
{
public:
	static ::MoleMole::ChessboardTextureSheetTagsData** StaticGet_Field_1_0()
	{
		return (::MoleMole::ChessboardTextureSheetTagsData**)Il2CppClass::FromTypeDefinitionIndex(Class_1_521A1285DEACFBB3_TypeDefinitionIndex)->GetStaticField(0x36B70);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_521A1285DEACFBB3__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_415752109343FC19(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_521A1285DEACFBB3_METHOD_1_415752109343FC19_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::ChessboardTextureTagConfig* Method_1_30D9F359AEE91264(::System::String* a1)
	{
		return ((::MoleMole::ChessboardTextureTagConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_521A1285DEACFBB3_METHOD_1_30D9F359AEE91264_OFFSET))(a1);
	}

	static ::System::Void Method_1_27CDA859F7ADAF64(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_521A1285DEACFBB3_METHOD_1_27CDA859F7ADAF64_OFFSET))(a1, a2);
	}
};
