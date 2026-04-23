#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9DFEED9E47A49175.h"
#include "unitysdk/RPG/GameCore/RtPropertyModifyData.h"

class Class_2_2B8244AF3A3A9C13_Class_1_48B256799DB483B1;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2B8244AF3A3A9C13_METHOD_2_55BFDD8EAC5D0F6D_OFFSET UNITYSDK_OFFSET(0x96A3EE0)
#define CLASS_2_2B8244AF3A3A9C13_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x96A46C0)
#define CLASS_2_2B8244AF3A3A9C13_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x96A3E70)
#define CLASS_2_2B8244AF3A3A9C13__CTOR_OFFSET UNITYSDK_OFFSET(0x96A4670)

inline static constexpr unsigned int Class_2_2B8244AF3A3A9C13_TypeDefinitionIndex = 49510;

class Class_2_2B8244AF3A3A9C13 : public ::Class_1_9DFEED9E47A49175
{
public:
	::System::Collections::Generic::List_1<::Class_2_2B8244AF3A3A9C13_Class_1_48B256799DB483B1*>* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B8244AF3A3A9C13__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B8244AF3A3A9C13_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_55BFDD8EAC5D0F6D(::System::String* a1, ::Il2CppArray<::RPG::GameCore::RtPropertyModifyData>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::RPG::GameCore::RtPropertyModifyData>*))((::PBYTE)hIl2Cpp + CLASS_2_2B8244AF3A3A9C13_METHOD_2_55BFDD8EAC5D0F6D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B8244AF3A3A9C13_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
