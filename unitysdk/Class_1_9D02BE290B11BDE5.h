#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace FluffyUnderware::Curvy::ImportExport { class SerializedCurvySpline; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_9D02BE290B11BDE5_METHOD_1_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x18E0FCC0)
#define CLASS_1_9D02BE290B11BDE5_METHOD_1_2FB64E791562708D_OFFSET UNITYSDK_OFFSET(0x18E0FA90)
#define CLASS_1_9D02BE290B11BDE5_METHOD_1_4348D348D50A2B81_OFFSET UNITYSDK_OFFSET(0x18E106D0)
#define CLASS_1_9D02BE290B11BDE5_METHOD_1_44C6956149352354_OFFSET UNITYSDK_OFFSET(0x18E10710)
#define CLASS_1_9D02BE290B11BDE5_METHOD_1_624BB7E37EFA1D8D_OFFSET UNITYSDK_OFFSET(0x18E10080)
#define CLASS_1_9D02BE290B11BDE5_METHOD_1_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x18E0FF70)
#define CLASS_1_9D02BE290B11BDE5__CCTOR_OFFSET UNITYSDK_OFFSET(0x18E0F9F0)

inline static constexpr unsigned int Class_1_9D02BE290B11BDE5_TypeDefinitionIndex = 39256;

class Class_1_9D02BE290B11BDE5 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::Il2CppArray<::FluffyUnderware::Curvy::ImportExport::SerializedCurvySpline*>*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::Il2CppArray<::FluffyUnderware::Curvy::ImportExport::SerializedCurvySpline*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9D02BE290B11BDE5_TypeDefinitionIndex)->GetStaticField(0x46020);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9D02BE290B11BDE5__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_2FB64E791562708D(::System::String* a1, ::UnityEngine::Transform* a2, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvySpline*>*& a3)
	{
		return ((::System::Void(*)(::System::String*, ::UnityEngine::Transform*, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvySpline*>*&))((::PBYTE)hIl2Cpp + CLASS_1_9D02BE290B11BDE5_METHOD_1_2FB64E791562708D_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_10054BB010E03EDD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9D02BE290B11BDE5_METHOD_1_10054BB010E03EDD_OFFSET))();
	}

	static ::System::String* Method_1_4348D348D50A2B81()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9D02BE290B11BDE5_METHOD_1_4348D348D50A2B81_OFFSET))();
	}

	static ::System::Boolean Method_1_624BB7E37EFA1D8D(::Foundation::AssetPath a1, ::Foundation::AssetRequestHandle& a2)
	{
		return ((::System::Boolean(*)(::Foundation::AssetPath, ::Foundation::AssetRequestHandle&))((::PBYTE)hIl2Cpp + CLASS_1_9D02BE290B11BDE5_METHOD_1_624BB7E37EFA1D8D_OFFSET))(a1, a2);
	}

	static ::System::Collections::IEnumerator* Method_1_44C6956149352354(::System::Single a1, ::System::Action_1<::System::Single>* a2)
	{
		return ((::System::Collections::IEnumerator*(*)(::System::Single, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_9D02BE290B11BDE5_METHOD_1_44C6956149352354_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AA169839CB93802A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9D02BE290B11BDE5_METHOD_1_AA169839CB93802A_OFFSET))();
	}
};
