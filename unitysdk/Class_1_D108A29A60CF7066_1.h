#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3CCCD675D7774146;
namespace RPG::Client { class GridFightGameFormation; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define CLASS_1_D108A29A60CF7066_1_METHOD_1_17A8188F008F05D9_OFFSET UNITYSDK_OFFSET(0x98E6280)
#define CLASS_1_D108A29A60CF7066_1_METHOD_1_20E91B15881E412D_OFFSET UNITYSDK_OFFSET(0x98E67B0)
#define CLASS_1_D108A29A60CF7066_1_METHOD_1_4F2F5B3F1E702469_OFFSET UNITYSDK_OFFSET(0x98E5B60)
#define CLASS_1_D108A29A60CF7066_1_METHOD_1_6372EA1BAC384732_OFFSET UNITYSDK_OFFSET(0x98E5820)
#define CLASS_1_D108A29A60CF7066_1_METHOD_1_820775ED51E6F382_OFFSET UNITYSDK_OFFSET(0x98E60B0)
#define CLASS_1_D108A29A60CF7066_1_METHOD_1_867F020B77224C07_OFFSET UNITYSDK_OFFSET(0x98E6AB0)
#define CLASS_1_D108A29A60CF7066_1__CTOR_OFFSET UNITYSDK_OFFSET(0x98E6D10)

inline static constexpr unsigned int Class_1_D108A29A60CF7066_1_TypeDefinitionIndex = 59473;

class Class_1_D108A29A60CF7066_1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D108A29A60CF7066_1__CTOR_OFFSET))(this);
	}

	::Il2CppArray<::System::Byte>* Method_1_6372EA1BAC384732(::RPG::Client::GridFightGameFormation* a1)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::RPG::Client::GridFightGameFormation*))((::PBYTE)hIl2Cpp + CLASS_1_D108A29A60CF7066_1_METHOD_1_6372EA1BAC384732_OFFSET))(this, a1);
	}

	::System::Void Method_1_17A8188F008F05D9(::RPG::Client::GridFightGameFormation* a1, ::Il2CppArray<::System::Byte>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameFormation*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_D108A29A60CF7066_1_METHOD_1_17A8188F008F05D9_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_1_4F2F5B3F1E702469(::System::IO::BinaryWriter* a1, ::Class_1_3CCCD675D7774146* a2)
	{
		return ((::System::Void(*)(::System::IO::BinaryWriter*, ::Class_1_3CCCD675D7774146*))((::PBYTE)hIl2Cpp + CLASS_1_D108A29A60CF7066_1_METHOD_1_4F2F5B3F1E702469_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_20E91B15881E412D(::System::IO::BinaryReader* a1, ::Class_1_3CCCD675D7774146* a2)
	{
		return ((::System::Void(*)(::System::IO::BinaryReader*, ::Class_1_3CCCD675D7774146*))((::PBYTE)hIl2Cpp + CLASS_1_D108A29A60CF7066_1_METHOD_1_20E91B15881E412D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_820775ED51E6F382(::System::IO::BinaryWriter* a1, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::System::IO::BinaryWriter*, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_D108A29A60CF7066_1_METHOD_1_820775ED51E6F382_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_867F020B77224C07(::System::IO::BinaryReader* a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::System::IO::BinaryReader*, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_D108A29A60CF7066_1_METHOD_1_867F020B77224C07_OFFSET))(a1, a2);
	}
};
