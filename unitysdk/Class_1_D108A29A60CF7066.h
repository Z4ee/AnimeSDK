#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3CCCD675D7774146;
namespace RPG::Client { class GridFightGameFormation; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define CLASS_1_D108A29A60CF7066_METHOD_1_17A8188F008F05D9_OFFSET UNITYSDK_OFFSET(0x11868E00)
#define CLASS_1_D108A29A60CF7066_METHOD_1_3F287D62F2AF2E9F_OFFSET UNITYSDK_OFFSET(0x11868790)
#define CLASS_1_D108A29A60CF7066_METHOD_1_6372EA1BAC384732_OFFSET UNITYSDK_OFFSET(0x11868490)
#define CLASS_1_D108A29A60CF7066_METHOD_1_6D0F9F165F6E3166_OFFSET UNITYSDK_OFFSET(0x11868AD0)
#define CLASS_1_D108A29A60CF7066_METHOD_1_F67761DD656CF01E_OFFSET UNITYSDK_OFFSET(0x118694A0)
#define CLASS_1_D108A29A60CF7066_METHOD_1_FC68B1BB382A7FE6_OFFSET UNITYSDK_OFFSET(0x11869350)
#define CLASS_1_D108A29A60CF7066__CTOR_OFFSET UNITYSDK_OFFSET(0x11869610)

inline static constexpr unsigned int Class_1_D108A29A60CF7066_TypeDefinitionIndex = 59472;

class Class_1_D108A29A60CF7066 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D108A29A60CF7066__CTOR_OFFSET))(this);
	}

	::Il2CppArray<::System::Byte>* Method_1_6372EA1BAC384732(::RPG::Client::GridFightGameFormation* a1)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::RPG::Client::GridFightGameFormation*))((::PBYTE)hIl2Cpp + CLASS_1_D108A29A60CF7066_METHOD_1_6372EA1BAC384732_OFFSET))(this, a1);
	}

	::System::Void Method_1_17A8188F008F05D9(::RPG::Client::GridFightGameFormation* a1, ::Il2CppArray<::System::Byte>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameFormation*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_D108A29A60CF7066_METHOD_1_17A8188F008F05D9_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_1_3F287D62F2AF2E9F(::System::IO::BinaryWriter* a1, ::Class_1_3CCCD675D7774146* a2)
	{
		return ((::System::Void(*)(::System::IO::BinaryWriter*, ::Class_1_3CCCD675D7774146*))((::PBYTE)hIl2Cpp + CLASS_1_D108A29A60CF7066_METHOD_1_3F287D62F2AF2E9F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FC68B1BB382A7FE6(::System::IO::BinaryReader* a1, ::Class_1_3CCCD675D7774146* a2)
	{
		return ((::System::Void(*)(::System::IO::BinaryReader*, ::Class_1_3CCCD675D7774146*))((::PBYTE)hIl2Cpp + CLASS_1_D108A29A60CF7066_METHOD_1_FC68B1BB382A7FE6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6D0F9F165F6E3166(::System::IO::BinaryWriter* a1, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::System::IO::BinaryWriter*, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_D108A29A60CF7066_METHOD_1_6D0F9F165F6E3166_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F67761DD656CF01E(::System::IO::BinaryReader* a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::System::IO::BinaryReader*, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_D108A29A60CF7066_METHOD_1_F67761DD656CF01E_OFFSET))(a1, a2);
	}
};
