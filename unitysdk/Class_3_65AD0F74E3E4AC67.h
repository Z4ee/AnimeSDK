#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_BCA32DB678A03168.h"
#include "unitysdk/Enum_3_316FC8E376D95053.h"

namespace MoleMole { class SceneObjectStateWidget; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_65AD0F74E3E4AC67_METHOD_3_0E142E3463F30350_OFFSET UNITYSDK_OFFSET(0x17CDFD00)
#define CLASS_3_65AD0F74E3E4AC67_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17CDFEA0)
#define CLASS_3_65AD0F74E3E4AC67__CTOR_OFFSET UNITYSDK_OFFSET(0x17CDFB90)

inline static constexpr unsigned int Class_3_65AD0F74E3E4AC67_TypeDefinitionIndex = 65722;

class Class_3_65AD0F74E3E4AC67 : public ::Class_2_BCA32DB678A03168
{
public:
	::MoleMole::SceneObjectStateWidget* Field_3_3; // 0x38
	::UnityEngine::GameObject* Field_3_2; // 0x40
	::System::Int32 Field_3_1; // 0x48
	::System::Single Field_3_0; // 0x4C

	::System::Void _ctor(::System::Int32 a1, ::Enum_3_316FC8E376D95053 a2, ::System::Int32 a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_316FC8E376D95053, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_65AD0F74E3E4AC67__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_0E142E3463F30350()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_65AD0F74E3E4AC67_METHOD_3_0E142E3463F30350_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_65AD0F74E3E4AC67_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
