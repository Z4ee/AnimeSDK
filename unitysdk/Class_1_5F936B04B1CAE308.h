#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftBanCellAxesDirectionType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_1_10C104F6F9CB09A4;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_5F936B04B1CAE308_GET_CACHEKEY_OFFSET UNITYSDK_OFFSET(0xB7D5730)
#define CLASS_1_5F936B04B1CAE308_METHOD_1_1CF391FC575689A1_1_OFFSET UNITYSDK_OFFSET(0xB7D5840)
#define CLASS_1_5F936B04B1CAE308_METHOD_1_1CF391FC575689A1_OFFSET UNITYSDK_OFFSET(0xB7D57D0)
#define CLASS_1_5F936B04B1CAE308_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0xB7D5780)
#define CLASS_1_5F936B04B1CAE308_METHOD_1_D438A5D442C01AC7_OFFSET UNITYSDK_OFFSET(0xB7D58B0)
#define CLASS_1_5F936B04B1CAE308_METHOD_1_FBBB57983F3AC114_OFFSET UNITYSDK_OFFSET(0xB7D5900)
#define CLASS_1_5F936B04B1CAE308__CTOR_OFFSET UNITYSDK_OFFSET(0xB7D5A90)

inline static constexpr unsigned int Class_1_5F936B04B1CAE308_TypeDefinitionIndex = 80087;

class Class_1_5F936B04B1CAE308 : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>* APEBEMALGBG; // 0x10
	::Class_1_10C104F6F9CB09A4* IBPBJBOKKMF; // 0x18

	::System::Void _ctor(::Class_1_10C104F6F9CB09A4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_10C104F6F9CB09A4*))((::PBYTE)hIl2Cpp + CLASS_1_5F936B04B1CAE308__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 get_CacheKey()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F936B04B1CAE308_GET_CACHEKEY_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F936B04B1CAE308_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::Nullable_1<::System::Int32> Method_1_1CF391FC575689A1()
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F936B04B1CAE308_METHOD_1_1CF391FC575689A1_OFFSET))(this);
	}

	::System::Nullable_1<::System::Int32> Method_1_1CF391FC575689A1_1()
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F936B04B1CAE308_METHOD_1_1CF391FC575689A1_1_OFFSET))(this);
	}

	::RPG::Client::MechCraft::MechCraftBanCellAxesDirectionType Method_1_D438A5D442C01AC7()
	{
		return ((::RPG::Client::MechCraft::MechCraftBanCellAxesDirectionType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F936B04B1CAE308_METHOD_1_D438A5D442C01AC7_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>* Method_1_FBBB57983F3AC114()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F936B04B1CAE308_METHOD_1_FBBB57983F3AC114_OFFSET))(this);
	}
};
