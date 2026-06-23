#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS { class IPatchedList; }

namespace Nap::NapECS
{
	inline static constexpr unsigned int PatchedList_1_TypeDefinitionIndex = 37358;

	template <typename T>
	class PatchedList_1 : public ::System::Object
	{
	public:
		static ::Il2CppArray<T>** StaticGet__emptyArray()
		{
			return (::Il2CppArray<T>**)Il2CppClass::FromTypeDefinitionIndex(PatchedList_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Int32 _size; // 0x0
		::System::Int32 _refCount; // 0x0
		::Il2CppArray<T>* _items; // 0x0
		::Il2CppArray<T>* _patch; // 0x0
	};
}
