#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2ArraySegment_1_TypeDefinitionIndex = 35031;

	template <typename T>
	struct B2ArraySegment_1
	{
		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ArraySegment_1<T>* StaticGet__Empty_k__BackingField()
		{
			return (::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ArraySegment_1<T>*)Il2CppClass::FromTypeDefinitionIndex(B2ArraySegment_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::Il2CppArray<T>* _array; // 0x0
		::System::Int32 _offset; // 0x0
		::System::Int32 _count; // 0x0
	};
}
